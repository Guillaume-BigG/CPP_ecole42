#include "Zombie.hpp"

int	main(void)
{
	int			n;
	std::string	name;

	n = 8;
	name = "Ajax";
	Zombie	*horde = zombieHorde(n, name);
	if (!horde)
	{
		std::cerr << "Error: Failed to create zombie horde." << std::endl;
		return (1);
	}
	for (int i = 1; i <= n; i++)
	{
		std::cout << i << " -> ";
		horde[i-1].announce();
	}

	delete [] horde;
	return (0);
}