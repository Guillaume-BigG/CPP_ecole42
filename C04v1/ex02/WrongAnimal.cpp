#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Pataplus")
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}

void		WrongAnimal::makeSound(void) const 
{
	std::cout << "Gyiiink make the Pataplus" << std::endl;
}
