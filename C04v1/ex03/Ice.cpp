#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(Ice const & src) : AMateria("ice") 
{
	std::cout << "Copy Ice constructor called" << std::endl;
	*this = src;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice const & Ice::operator=(Ice const & rhs)
{
	std::cout << "Ice assignation operator called" << std::endl;
	if (this != &rhs) 
    {
		this->_type = rhs._type;
	}
	return *this;
}

AMateria*	Ice::clone(void) const
{
	AMateria *newIce = new Ice(*this);
	return newIce;
}

void		Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}