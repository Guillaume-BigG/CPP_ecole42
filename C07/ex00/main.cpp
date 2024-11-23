#include "whatever.hpp"

int	main(void)
{
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	int i1 = 42;
	int i2 = 24;
	float f1 = 42.42;
	float f2 = 24.24;
	char c1 = 'a';
	char c2 = 'z';

	std::cout << "Max of " << i1 << " and " << i2 << ": " << max<int>(i1,i2) << std::endl;
	std::cout << "Min of " << f1 << " and " << f2 << ": " << min<float>(f1,f2) << std::endl;
	std::cout << "Value of c1 is " << c1 << std::endl;
	std::cout << "Value of c2 is " << c2 << std::endl;
	::swap<char>(c1, c2);
	std::cout << "New value of c1 is " << c1 << std::endl;
	std::cout << "New value of c2 is " << c2 << std::endl << std::endl;

	return (0);
}