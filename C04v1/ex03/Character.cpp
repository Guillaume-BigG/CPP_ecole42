#include "Character.hpp"

Character::Character(void) : _name("Who am I")
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "Default Character constructor called named: " << this->getName() << std::endl;
}

Character::Character(Character const & src)
{
	std::cout << "Copy Character constructor called" << std::endl;
	*this = src;
}

Character::~Character(void)
{
	std::cout << "Character detructor called" << std::endl;
    for (int i = 0; i < 4; ++i) 
    {
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

Character const & Character::operator=(Character const & rhs)
{
	std::cout << "Character assignation operator called" << std::endl;
	if (this != &rhs)
    {
	    _name = rhs.getName();
	    for (int i = 0; i < 4; i++)
	    {
		    if (_inventory[i])
		    {
			    delete _inventory[i];
			    _inventory[i] = rhs._inventory[i]->clone();
		    }
	    }   
    }
	return *this;
}

std::string const &	Character::getName(void) const
{
	return this->_name;
}

void    Character::equip(AMateria* m)
{
	if (m)
	{
		for (int i = 0; i < 4; i++) 
		{
			if (!this->_inventory[i]) 
			{
				std::cout << this->_name << " equipped " << m->getType() << std::endl;
				this->_inventory[i] = m;
				return ;
			}
		}	
	}
	std::cout << this->_name << " could not equip cause inventory is not a known type" << std::endl;
}

void    Character::unequip(int idx)
{
	if (idx < 4)
	{
    	if (this->_inventory[idx]) 
    	{
	    	std::cout << this->_name << " has unequipped " << this->_inventory[idx]->getType() << std::endl;
	    	delete this->_inventory[idx];		    
        	this->_inventory[idx] = NULL;
		} 
    	else 
			std::cout << this->_name << "could not unequip cause no inventoy learned yet in slot"<< std::endl;
	}
	else
		std::cout << " Index is too high" << std::endl;
}

void 	Character::use(int idx, ICharacter& target)
{
	if (idx < 4)
	{
   		if (this->_inventory[idx])
		{
			std::cout << this->_name << " used " << this->_inventory[idx]->getType() << std::endl;
			this->_inventory[idx]->use(target);
		} 
    	else 
			std::cout << this->_name << " could not use cause no inventory learned yet in slot" << std::endl;
	}
	else
		std::cout << " Index is too high" << std::endl;
}