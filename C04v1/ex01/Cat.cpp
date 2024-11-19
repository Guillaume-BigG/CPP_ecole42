#include "Cat.hpp"

Cat::Cat() : _brain(new Brain())
{
	_type = "Cat";
	std::cout << "Default Cat constructor called. Brain is created" << std::endl;
}

Cat::Cat(Cat const & src)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called. Brain was removed" << std::endl;
	delete _brain;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	std::cout << "Assignment Overload" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain); // deep copies to avoid double free during destruction and shared memory address of brain
		std::cout << "Cat was copied. Brain was copied" << std::endl;
	}
	return *this;
}

void		Cat::makeSound(void) const
{
	std::cout << "Meow Meow Meow Meooooow" << std::endl;
}