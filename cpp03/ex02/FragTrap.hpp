#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        // FragTrap(void);
        FragTrap(const std::string& name);
        ~FragTrap(void);

        // FragTrap(const FragTrap& other);
        // FragTrap& operator=(const FragTrap& other);

        void highFivesGuys(void);
};

#endif
