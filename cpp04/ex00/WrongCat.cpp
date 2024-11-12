#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal()
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    if (this != &obj)
        this->_type = obj._type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow?" << std::endl;
}
