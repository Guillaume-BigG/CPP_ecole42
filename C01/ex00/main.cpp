#include "Zombie.hpp"

int	main(void)
{

	std::cout << "First Zombie - HEAP" << std::endl;
	Zombie *ajax = newZombie("AJAX");
	if (!ajax)
	{
		std::cerr << "Error: Failed to create zombie." << std::endl;
		return (1);
	}
	ajax->announce();
	delete (ajax);

	std::cout << "Second Zombie - STACK" << std::endl;
	randomChump("HERCULE");
	std::cout << "Hercule was delete before the end of main" << std::endl;


	return (0);
}