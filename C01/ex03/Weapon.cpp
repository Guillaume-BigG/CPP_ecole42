#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}


Weapon::~Weapon()
{
}

void Weapon::setType(std::string new_type)
{
	_type = new_type;
}

std::string const & Weapon::getType(void) const
{
	std::string	const &ref = _type;
	return ref;
}