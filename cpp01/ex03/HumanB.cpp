#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_Weapon = NULL;
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)
{
	if (_Weapon)
		std::cout << _name << " attack with their " << _Weapon->getType() << std::endl;
	else
		std::cout << _name << " attack without any weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_Weapon = &weapon;
}
