#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
{
	_name = name;
	_Weapon = &weapon;
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)
{
	std::cout << _name 
		<< " attack with their " 
		<< _Weapon->getType() << std::endl;
}
