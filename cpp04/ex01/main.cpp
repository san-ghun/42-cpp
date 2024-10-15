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

    const Animal* animals[4] = { new Dog(), new Cat(), new Dog(), new Cat() };

    std::cout << std::endl;
    
    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
    }

    return 0;
}
