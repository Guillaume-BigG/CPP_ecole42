#include "Elec.hpp"


Elec::Elec() : AMateria("Elec")
{
	std::cout << "Default Elec constructor called" << std::endl;
}

Elec::Elec(Elec const & src) : AMateria("Elec")
{
	std::cout << "Copy Elec constructor called" << std::endl;
	*this = src;
}

Elec::~Elec()
{
	std::cout << "Elec destructor called" << std::endl;
}

Elec const & Elec::operator=(Elec const & rhs)
{
	std::cout << "Elec assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

AMateria*	Elec::clone(void) const
{
	AMateria *newElec = new Elec();
	newElec->setType(getType());
	return newElec;
}

void		Elec::use(ICharacter & target)
{
	std::cout << "* Shocked " << target.getName() << " with Thunder" << std::endl;
}