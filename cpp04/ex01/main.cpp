#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* i = new Dog();
    const Animal* j = new Cat();

    std::cout << std::endl;

    delete i;
    delete j;
    
    std::cout << "\n----Array testing----" << std::endl;

    Animal* animals[4] = { new Dog(), new Cat(), new Dog(), new Cat() };

    for (int i = 0; i < 4; i++)
    {
        if (animals[i]->getType() == "Dog")
        {
            for (int j = 0; j < 100; j++)
            {
                ((Dog*)animals[i])->setIdea(j, "Dog idea");
            }
        }

        if (animals[i]->getType() == "Cat")
        {
            for (int j = 0; j < 100; j++)
            {
                ((Cat*)animals[i])->setIdea(j, "Cat idea");
            }
        }
    }
    
    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
    }

    std::cout << "\n----Deep Copy testing----" << std::endl;

    Cat cat;
    std::cout << &cat << std::endl;
    cat.setIdea(0, "Cat idea");
    std::cout << &(cat._brain->ideas[0]) << std::endl;
    std::cout << cat.getIdea(0) << std::endl;

    std::cout << std::endl;

    Cat cat2 = cat;
    std::cout << &cat2 << std::endl;
    std::cout << &(cat2._brain->ideas[0]) << std::endl;
    std::cout << cat2.getIdea(0) << std::endl;

    return 0;
}
