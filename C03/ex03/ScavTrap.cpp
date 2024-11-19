#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Ajax")
{
	std::cout << "Defaut ScavTrap Constructor Called" << std::endl;
	this->_hit_points = 100;
	this->_energy = 50;
	this->_att_dam = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Defaut ScavTrap Destructor Called: goodbye " << this->getName() << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "String ScavTrap Constructor Called" << std::endl;
	this->_hit_points = 100;
	this->_energy = 50;
	this->_att_dam = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "Copy ScavTrap Constructor Called" << std::endl;
	*this = src;
}

// OPERTATOR OVERLOAD

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hit_points = rhs.getHitPoints();
		this->_energy = rhs.getEnergyPoints();
		this->_att_dam = rhs.getAttDam();
	}
	return (*this);
}

// MEMBER FUNCTION
void	ScavTrap::guardGate(void)
{
	std::cout << this->getName() << " is now in gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energy <= 0)
	{
		std::cout << "ScavTrap: " << this->_name << " can't do anything, no energy left, out of fuel" << std::endl;
		return ;
	}	
	if (this->_hit_points <= 0)
	{
		std::cout << "ScavTrap: " << this->_name << " can't do anything, no health left, is dead ..." << std::endl;
		return ;
	}
	std::cout << "ScavTrap: " << this->_name << " attacks " << target << std::endl;
	this->_energy--;
}