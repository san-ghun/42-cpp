#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(/* args */);
	~Zombie();

	void	announce( void );
	Zombie*	newZombie( std::string name );
	void	randomChump( std::string name );

};

Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie()
{
}


#endif