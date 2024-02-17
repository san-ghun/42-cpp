#include "Zombie.hpp"

int	main( void )
{
	Zombie*	horde;
	int		n;

	n = 120;
	horde = zombieHorde(n, "Horde");
	if (horde == NULL)
		return (EXIT_FAILURE);
	for (int i = 0; i < n; i++)
	{
		std::cout << "Zombie " << i << ": ";
		horde[i].announce();
	}
	delete[] horde;
	return (EXIT_SUCCESS);
}