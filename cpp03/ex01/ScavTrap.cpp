#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    std::cout << "ScavTrap " << name << " created with default constructor called" << std::endl;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap " << this->_name << " destroyed with default destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (this->_energy_points == 0) {
        std::cout << "ScavTrap " << this->_name << " has no energy points left" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
    this->_energy_points--;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
