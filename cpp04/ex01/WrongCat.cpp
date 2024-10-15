#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj)
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
