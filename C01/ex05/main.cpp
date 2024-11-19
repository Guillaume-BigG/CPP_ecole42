#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2) 
	{
		std::cout << "Provide only one level of complain: DEBUG, INFO, WARNING or ERROR" << std::endl;
		return (0);
	}
	Harl	harl;
	harl.complain(argv[1]);
	return (0);
}