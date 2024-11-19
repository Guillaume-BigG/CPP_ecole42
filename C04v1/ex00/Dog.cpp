#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(Dog const & src)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void		Dog::makeSound(void) const
{
	std::cout << "Wouuf Waouf Woooaffa Wooof" << std::endl;
}
