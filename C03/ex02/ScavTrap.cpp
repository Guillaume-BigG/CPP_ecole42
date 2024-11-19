#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Ajax")
{
	std::cout << "Defaut ScavTrap Constructor Called" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDammage(20);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Defaut ScavTrap Destructor Called: goodbye " << this->getName() << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "String ScavTrap Constructor Called" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDammage(20);
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
		this->setName(rhs.getName());
		this->setHitPoints(rhs.getHitPoints());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setAttackDammage(rhs.getAttDam());
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
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << "ScavTrap: " << this->getName() << " can't do anything, no energy left, out of fuel" << std::endl;
		return ;
	}	
	if (this->getHitPoints() <= 0)
	{
		std::cout << "ScavTrap: " << this->getName() << " can't do anything, no health left, is dead ..." << std::endl;
		return ;
	}
	std::cout << "ScavTrap: " << this->getName() << " attacks " << target << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
}