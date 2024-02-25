#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	return (new Zombie(name));
}

void	randomChump( std::string name )
{
	Zombie(name).announce();
}

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie*		horde;
	std::string	p_name;

	p_name = name;
	try
	{
		horde = new Zombie[N];
		for (int i = 0; i < N; i++)
		{
			// p_name += ' ';
			// p_name += i + '0';
			horde[i].setName(p_name);
			p_name = name;
		}
		return (horde);
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
		return (NULL);
	}
}
