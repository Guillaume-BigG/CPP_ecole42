#include "ClapTrap.hpp"

// CONST AND DESTR

ClapTrap::ClapTrap() : _name("Ajax"), _hit_points(10), _energy(10), _att_dam(0)
{
	std::cout << "Defaut ClapTrap Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Defaut ClapTrap Destructor Called: goodbye " << this->_name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10),
	_energy(10), _att_dam(0)
{
	std::cout << "String ClapTrap Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy ClapTrap Constructor Called" << std::endl;
	*this = src;
}

// OPERTATOR OVERLOAD

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
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

// ACCESS FUNCTIONS
std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

int ClapTrap::getHitPoints(void) const
{
	return (this->_hit_points);
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->_energy);
}

int ClapTrap::getAttDam(void) const
{
	return (this->_att_dam);
}

void		ClapTrap::setHitPoints(int amount)
{
	_hit_points = amount;
}
void		ClapTrap::setEnergyPoints(int amount)
{
	_energy = amount;
}

void		ClapTrap::setAttackDammage(int amount)
{
	_att_dam = amount;
}

void ClapTrap::setName(std::string name)
{
	_name = name;
}

// CLASS FUNCTION
void ClapTrap::attack(const std::string &target)
{
	if (this->_energy <= 0)
	{
		std::cout << "ClapTrap: " << this->_name << " can't do anything, no energy left, out of fuel" << std::endl;
		return ;
	}	
	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap: " << this->_name << " can't do anything, no health left, is dead ..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap: " << this->_name << " attacks " << target << std::endl;
	this->_energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap: " << this->_name << " is already dead, you can't beat up the dead" << std::endl;
        return;
    }

    std::cout << "ClapTrap: " << this->_name << " has taken " << amount << " damage" << std::endl;

    // Reduce hit points by amount, but ensure they don't go negative
    if (amount >= this->_hit_points)
    {
        this->_hit_points = 0;
        std::cout << "ClapTrap: " << this->_name << " is now dead" << std::endl;
    }
    else
    {
        this->_hit_points -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy <= 0)
	{
		std::cout << "ClapTrap: " << this->_name << " can't do anything, no energy left, out of fuel" << std::endl;
		return ;
	}	
	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap: " << this->_name << " can't do anything, no health left, is dead ..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap: " << this->_name << " has repaired itself and gained " << amount << " HP" << std::endl;
	this->_energy--;
	this->_hit_points += amount;
}
