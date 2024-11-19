#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Unicorn")
{
	std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "Copy AAnimal constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &	AAnimal::operator=(AAnimal const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::string	AAnimal::getType(void) const
{
	return this->_type;
}
