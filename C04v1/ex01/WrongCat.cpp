#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void		WrongCat::makeSound(void) const
{
	std::cout << "Beurk Beurk Beurk" << std::endl;
}
