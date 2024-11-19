#include "AMateria.hpp"

AMateria::AMateria() : _type("Generic Materia")
{
	std::cout << "Default Materia constructor called" << std::endl;
}

AMateria::~AMateria() 
{
	std::cout << "Materia destructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) 
{
    std::cout << "String Materia constructor called with type: " << this->_type << std::endl;
}

AMateria::AMateria(AMateria const &src) 
{
	std::cout << "Copy Materia constructor called" << std::endl;
	*this = src;
}

AMateria const   &AMateria::operator=(AMateria const &rhs) 
{
	std::cout << "AMateria assignation operator called" << std::endl;
	if (this != &rhs) 
	{
		this->_type = rhs._type;
	}
	return *this;
}

std::string const	&AMateria::getType() const 
{
	return this->_type;
}

void	AMateria::setType(std::string const & type)
{
	_type = type;
}

void				AMateria::use(ICharacter &target) 
{
	std::cout << this->_type << " used on " << target.getName() << std::endl;
}