#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
    *this = src;
}

Brain &Brain::operator=(Brain const &obj)
{
    if (this != &obj)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = obj.ideas[i];
    }
    return *this;
}

std::string	Brain::getIdeas(int i) const
{
    if (i < 0 || i > 99)
    {
        std::cout << "Index out of range" << std::endl;
        return "";
    }
    return this->ideas[i];
}

void	Brain::setIdeas(int i, std::string idea)
{
    if (i < 0 || i > 99)
    {
        std::cout << "Index out of range" << std::endl;
        return;
    }
    this->ideas[i] = idea;
}
