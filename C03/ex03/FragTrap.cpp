#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Ajax")
{
	std::cout << "Defaut FragTrap Constructor Called" << std::endl;
	this->_hit_points = 100;
	// this->_energy = 100;
	this->_att_dam = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "Defaut FragTrap Destructor Called: goodbye " << this->getName() << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "String FragTrap Constructor Called" << std::endl;
	this->_hit_points = 100;
	// this->_energy = 100;
	this->_att_dam = 30;
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
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy = rhs._energy;
	this->_att_dam = rhs._att_dam;
	}
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	if (this->_energy <= 0)
	{
		std::cout << "FragTrap: " << this->_name << " can't do anything, no energy left, out of fuel" << std::endl;
		return ;
	}
	if (this->_hit_points <= 0)
	{
		std::cout << "FragTrap: " << this->_name << " can't do anything, no health left, is dead ..." << std::endl;
		return ;
	}
	std::cout << "FragTrap :" << this->_name << " wants a high five ? You dig ?" << std::endl;
}
