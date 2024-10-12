#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    ClapTrap claptrap("ct");
    claptrap.attack("target");
    claptrap.beRepaired(5);
    claptrap.takeDamage(5);
    claptrap.printStats();

    std::cout << std::endl;

    ClapTrap claptrap2(claptrap);
    claptrap2.attack("target");
    claptrap2.beRepaired(5);
    claptrap2.takeDamage(5);
    claptrap2.printStats();

    std::cout << std::endl;

    ScavTrap scavtrap("st");
    scavtrap.attack("target");
    scavtrap.beRepaired(5);
    scavtrap.takeDamage(5);
    scavtrap.guardGate();
    scavtrap.printStats();

    std::cout << std::endl;

    ScavTrap scavtrap2(scavtrap);
    scavtrap2.attack("target");
    scavtrap2.beRepaired(5);
    scavtrap2.takeDamage(5);
    scavtrap2.guardGate();
    scavtrap2.printStats();

    std::cout << std::endl;

    FragTrap fragtrap("ft");
    fragtrap.attack("target");
    fragtrap.beRepaired(5);
    fragtrap.takeDamage(5);
    fragtrap.highFivesGuys();
    fragtrap.printStats();

    std::cout << std::endl;

    FragTrap fragtrap2(fragtrap);
    fragtrap2.attack("target");
    fragtrap2.beRepaired(5);
    fragtrap2.takeDamage(5);
    fragtrap2.highFivesGuys();
    fragtrap2.printStats();

    std::cout << std::endl;
    
    return 0;
}
