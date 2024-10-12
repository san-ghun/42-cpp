#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : _name(name) {
    std::cout << "ClapTrap " << name << " created with default constructor called" << std::endl;
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap default destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_name = other._name;
        this->_hit_points = other._hit_points;
        this->_energy_points = other._energy_points;
        this->_attack_damage = other._attack_damage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (this->_energy_points == 0) {
        std::cout << "ClapTrap " << this->_name << " has no energy points left" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
    this->_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hit_points == 0) {
        std::cout << "ClapTrap " << this->_name << " has no hit points left" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    this->_hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energy_points == 0) {
        std::cout << "ClapTrap " << this->_name << " has no energy points left" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " repaired " << amount << " hit points!" << std::endl;
    this->_energy_points--;
    this->_hit_points += amount;
}

void ClapTrap::printStats(void) const {
    std::cout << "ClapTrap " << this->_name << " has " << this->_hit_points << " hit points and " << this->_energy_points << " energy points" << std::endl;
}
