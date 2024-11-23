#include "Base.hpp"

Base::~Base() 
{

}

Base	*generate(void)
{
	srand (time(NULL));
	int random = rand() % 3;
	if (random == 1)
	{
		std::cout << "Generating A Base" << std::endl;
		return (new A());
	}
	else if (random == 2)
	{
		std::cout << "Generating B Base" << std::endl;
		return (new B());
	}
	else
	{
		std::cout << "Generating C Base" << std::endl;
		return (new C());
	}
}

void	identify(Base * p)
{
	std::cout << "Identify with pointer : " << std::endl;
	if (dynamic_cast<A*>(p)) 
	{ 
		std::cout << "Class A identified" << std::endl;
	} 
	else if (dynamic_cast<B*>(p)) 
	{
		std::cout << "Class B identified" << std::endl;
	} 
	else if (dynamic_cast<C*>(p)) 
	{
		std::cout << "Class C identified" << std::endl;
	} 
	else 
	{
		std::cout << "Unknown" << std::endl;
	}

    // std::cout << "Identify with pointer : " << std::endl;
	// try
	// {
	// 	A base = dynamic_cast<A &>(*p); //dynamic_cast<A*>(p) return nullptr on failure vs 
	// 	std::cout << "Class A was identified" << std::endl;
	// 	return ;
	// }
	// catch(const std::exception& e)
	// {
	// }
	// try
	// {
	// 	B base = dynamic_cast<B &>(*p); // dynamic_cast<B&>(*p) return Throws std::bad_cast on failure
	// 	std::cout << "Class B was identified" << std::endl;
	// 	return ;
	// }
	// catch(const std::exception& e)
	// {
	// }
	// try
	// {
	// 	C base = dynamic_cast<C &>(*p);
	// 	std::cout << "Class C was identified" << std::endl;
	// 	return ;
	// }
	// catch(const std::exception& e)
	// {
	// }

}

void	identify(Base& p) 
{
	std::cout << "Identify with reference : " << std::endl;
    try
	{
		A base = dynamic_cast<A &>(p);
		std::cout << "Class A was identified" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
		try
	{
		B base = dynamic_cast<B &>(p);
		std::cout << "Class B was identified" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
		try
	{
		std::cout << "Class C was identified" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
}
