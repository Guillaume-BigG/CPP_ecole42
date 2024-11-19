#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int	main(void)
{
	Point a(0, 0);
	Point b(4, 0);
	Point c(2, 3);
	Point z(2, 1); //init
	Point y(2, 0); //verge so no
	Point x(5, 2); // out

	bool point1 = bsp(a, b, c, z);
	bool point2 = bsp(a, b, c, y);
	bool point3 = bsp(a, b, c, x);

	std::cout << "Is the point 1 in triangle? " << std::endl;
	if (point1 == 1)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	std::cout << "Is the point 2 in triangle? " << std::endl;
	if (point2 == 1)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	std::cout << "Is the point 3 in triangle? " << std::endl;
	if (point3 == 1)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	return (0);
}