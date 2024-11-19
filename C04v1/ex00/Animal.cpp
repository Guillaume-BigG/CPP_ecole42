#include "Animal.hpp"

Animal::Animal() : _type("Unicorn")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &	Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::string	Animal::getType(void) const
{
	return this->_type;
}

void		Animal::makeSound(void) const 
{
	std::cout << "Brwwerrrwwww make the Unicorn" << std::endl;
}
