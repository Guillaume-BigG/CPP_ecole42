#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2) 
	{
		std::cout << "You need to provide one argument only with the program" << std::endl;
		return (0);
	}
	Harl	harl;
	harl.complain(av[1]);
	return (0);
}