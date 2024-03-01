#include "Zombie.hpp"

int	main( void )
{
	Zombie*	z0;
	Zombie*	z1;
	Zombie*	z2;
	Zombie*	z3;

	std::cout << "\n--- Zombies from heap ---" << std::endl;
	z0 = new Zombie();
	z0->announce();
	delete z0;
	z1 = new Zombie("new");
	z1->announce();
	z2 = new Zombie("from");
	z2->announce();
	z3 = newZombie("heap");
	z3->announce();
	delete z1;
	delete z2;
	delete z3;

	std::cout << "\n--- Zombies from stack ---" << std::endl;
	randomChump("random");
	randomChump("from");
	randomChump("stack");

	return 0;
}