#include "Water.hpp"


Water::Water() : AMateria("Water")
{
	std::cout << "Default Water constructor called" << std::endl;
}

Water::Water(Water const & src) : AMateria("Water")
{
	std::cout << "Copy Water constructor called" << std::endl;
	*this = src;
}

Water::~Water()
{
	std::cout << "Water destructor called" << std::endl;
}

Water const & Water::operator=(Water const & rhs)
{
	std::cout << "Water assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

AMateria*	Water::clone(void) const
{
	AMateria *newWater = new Water();
	newWater->setType(getType());
	return newWater;
}

void		Water::use(ICharacter & target)
{
	std::cout << "* bubble blown to  " << target.getName() << std::endl;
}
