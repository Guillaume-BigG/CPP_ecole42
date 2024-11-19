#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Ajax_clap_name")
{
	std::cout << "Defaut DiamondTrap Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	std::cout << "Copy DiamondTrap Constructor Called" << std::endl;
	*this = src;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "String DiamondTrap Constructor Called" << std::endl;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy = ScavTrap::_energy;
	this->_att_dam = FragTrap::_att_dam;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Default DiamondTrap Destructor Destructor Called: goodbye " << this->getName() << std::endl;
		// this->DiamondTrap::getName()
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	if (this != &rhs)
	{
		this->setName(rhs.getName());
		this->setHitPoints(rhs.getHitPoints());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setAttackDammage(rhs.getAttDam());
	}
	return (*this);
}

void DiamondTrap::WhoAmI()
{
	std::cout << "Who am I ...? I think i might be " << std::endl;
	std::cout << "A shining DIAMOND called " << DiamondTrap::getName() << std::endl;
	std::cout << "And a clapping Robot called " << ClapTrap::getName() << std::endl;
}

// ACCESS
std::string DiamondTrap::getName(void) const
{
	return (this->_name);
}

int DiamondTrap::getHitPoints(void) const
{
	return (this->FragTrap::getHitPoints());
}

int DiamondTrap::getEnergyPoints(void) const
{
	return (this->ScavTrap::getEnergyPoints());
}

int DiamondTrap::getAttDam(void) const
{
	return (this->FragTrap::getAttDam());
}