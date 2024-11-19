#include "Dog.hpp"

Dog::Dog() : _brain(new Brain())
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
	std::cout << "Dog destructor called. Brain was removed" << std::endl;
	delete _brain;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain);
		std::cout << "Dog was copied. Brain was copied" << std::endl;
	}
	return *this;
}

void		Dog::makeSound(void) const
{
	std::cout << "Wouuf Waouf Woooaffa Wooof" << std::endl;
}
