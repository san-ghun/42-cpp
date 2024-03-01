#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon(void)
{
}

std::string	Weapon::getType(void) const
{
	return (_type);
}

void	Weapon::setType(std::string new_type)
{
	_type = new_type;
}
