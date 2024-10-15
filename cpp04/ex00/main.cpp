#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "------------Animal------------" << std::endl;
    const Animal* meta = new Animal();
    const Animal* i = new Dog();
    const Animal* j = new Cat();

    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the dog sound!
    std::cout << j->getType() << " " << std::endl;
    j->makeSound();

    meta->makeSound();

    delete meta;
    delete i;
    delete j;

    std::cout << "\n---------Wrong Animal---------" << std::endl;

    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* j2 = new WrongCat();

    std::cout << j2->getType() << " " << std::endl;
    j2->makeSound();

    meta2->makeSound();

    delete meta2;
    delete j2;

    std::cout << "\n----virtual function test----" << std::endl;

    Animal* base = new Dog();
    delete base;

    std::cout << "\n----overrideing virtual function----" << std::endl;

    Animal* animal; // Base class pointer
    Dog dog; // Derived class object
    Cat cat; // Derived class object

    // Point to Dog object
    animal = &dog;
    animal->makeSound();

    // Point to Cat object
    animal = &cat;
    animal->makeSound();

    return 0;
}
