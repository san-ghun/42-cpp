#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& obj) : Animal()
{
    *this = obj;
}

Dog& Dog::operator=(const Dog& obj)
{
    if (this != &obj)
        this->_type = obj._type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}
