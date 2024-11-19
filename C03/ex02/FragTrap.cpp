#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Ajax")
{
	std::cout << "Defaut FragTrap Constructor Called" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDammage(30);
}

FragTrap::~FragTrap()
{
	std::cout << "Defaut FragTrap Destructor Called: goodbye " << this->getName() << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "String FragTrap Constructor Called" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDammage(30);
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "Copy FragTrap Constructor Called" << std::endl;
	*this = src;
}

// OPERTATOR OVERLOAD

FragTrap &FragTrap::operator=(FragTrap const &rhs)
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

void FragTrap::highFivesGuys(void)
{
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << "FragTrap: " << this->getName() << " can't do anything, no energy left, out of fuel" << std::endl;
		return ;
	}
	if (this->getHitPoints() <= 0)
	{
		std::cout << "FragTrap: " << this->getName() << " can't do anything, no health left, is dead ..." << std::endl;
		return ;
	}
	std::cout << "FragTrap :" << this->getName() << " wants a high five ? You dig ?" << std::endl;
}
