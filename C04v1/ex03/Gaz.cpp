#include "Gaz.hpp"


Gaz::Gaz() : AMateria("Gaz")
{
	std::cout << "Default Gaz constructor called" << std::endl;
}

Gaz::Gaz(Gaz const & src) : AMateria("Gaz")
{
	std::cout << "Copy Gaz constructor called" << std::endl;
	*this = src;
}

Gaz::~Gaz()
{
	std::cout << "Gaz destructor called" << std::endl;
}

Gaz const & Gaz::operator=(Gaz const & rhs)
{
	std::cout << "Gaz assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

AMateria*	Gaz::clone(void) const
{
	AMateria *newGaz = new Gaz();
	newGaz->setType(getType());
	return newGaz;
}

void		Gaz::use(ICharacter & target)
{
	std::cout << "* poisoned " << target.getName() << " with toxic gaz" << std::endl;
}