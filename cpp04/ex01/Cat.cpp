#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
    std::cout << "Cat ideas memory address " << &(this->_brain->ideas[0]) << std::endl;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& obj)
{
    // this->_brain = new Brain(*obj._brain);
    // std::cout << "Cat deep copied memory address " << &(this->_brain->ideas[0]) << std::endl;
    *this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
    if (this != &obj)
    {
        this->_type = obj._type;
        // this->_brain = obj._brain;
        // std::cout << "Cat shallow copied memory address " << &(this->_brain->ideas[0]) << std::endl;
        this->_brain = new Brain(*obj._brain);
        std::cout << "Cat deep copied memory address " << &(this->_brain->ideas[0]) << std::endl;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}

void Cat::setIdea(int index, std::string idea)
{
    this->_brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
    return this->_brain->getIdea(index);
}
