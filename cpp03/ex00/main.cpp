#include "ClapTrap.hpp"

int main(void) {
    ClapTrap claptrap("Claptrap");
    claptrap.attack("target");
    claptrap.beRepaired(5);
    claptrap.takeDamage(5);
    claptrap.printStats();
    return 0;
}
