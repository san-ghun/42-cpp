#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
    std::cout << "Dog ideas memory address " << &(this->_brain->ideas[0]) << std::endl;

}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& obj)
{
    *this = obj;
}

Dog& Dog::operator=(const Dog& obj)
{
    if (this != &obj)
    {
        this->_type = obj._type;
        this->_brain = new Brain(*obj._brain);
        std::cout << "Dog deep copied memory address " << &(this->_brain->ideas[0]) << std::endl;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}

void Dog::setIdea(int index, std::string idea)
{
    this->_brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
    return this->_brain->getIdea(index);
}
