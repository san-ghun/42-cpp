#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& obj)
{
    *this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
    if (this != &obj)
        this->_type = obj._type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}
