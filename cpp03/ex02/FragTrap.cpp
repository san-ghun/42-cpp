#include "FragTrap.hpp"

// FragTrap::FragTrap(void) : ClapTrap()
// {
//     std::cout << "FragTrap default constructor called" << std::endl;
// }

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "FragTrap " << name << " created with default constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->_name << " destroyed with default destructor called" << std::endl;
}

// FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
// {
//     std::cout << "FragTrap copy constructor called" << std::endl;
//     *this = other;
// }

// FragTrap& FragTrap::operator=(const FragTrap& other)
// {
//     std::cout << "FragTrap copy assignment operator called" << std::endl;
//     if (this != &other) {
//         this->_name = other._name;
//         this->_hit_points = other._hit_points;
//         this->_energy_points = other._energy_points;
//         this->_attack_damage = other._attack_damage;
//     }
//     return *this;
// }

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " has been given a high five!" << std::endl;
}
