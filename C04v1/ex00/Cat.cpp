#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & src)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void		Cat::makeSound(void) const
{
	std::cout << "Meow Meow Meow Meooooow" << std::endl;
}
