#include "Base.hpp"
#include <unistd.h>


int	main(void) 
{
	for (int i = 0; i < 10; ++i) {
		Base *base = generate();
		identify(base); //pointer
		identify(*base); //reference
		delete base;
		std::cout << "------" << i << "------" << std::endl;
		usleep(100000);
	}
	return (0);
}