#include "Cure.hpp"


Cure::Cure() : AMateria("cure")
{
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria("cure")
{
	std::cout << "Copy Cure constructor called" << std::endl;
	*this = src;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure const & Cure::operator=(Cure const & rhs)
{
	std::cout << "Cure assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

AMateria*	Cure::clone(void) const
{
	AMateria *newCure = new Cure();
	newCure->setType(getType());
	return newCure;
}

void		Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}