#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &obj)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = obj;
}

AAnimal& AAnimal::operator=(const AAnimal& obj)
{
    if (this != &obj)
        this->_type = obj._type;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

// void AAnimal::makeSound() const
// {
//     std::cout << "AAnimal sound" << std::endl;
// }

void AAnimal::setType(std::string type)
{
    this->_type = type;
}

std::string AAnimal::getType() const
{
    return this->_type;
}
