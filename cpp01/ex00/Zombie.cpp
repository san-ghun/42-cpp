#include "Zombie.hpp"


Zombie::Zombie()
{
	this->_name = "unknown";
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->_name << ": NnnooooOo!!!" << std::endl;
}

// void	Zombie::_setName(std::string name)
// {}

void	Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}