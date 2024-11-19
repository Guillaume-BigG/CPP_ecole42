#include "HumanA.hpp"	

HumanA::HumanA(std::string name, Weapon & weapon) : _weapon(weapon), _name(name)
{

}
HumanA::~HumanA()
{

}

void HumanA::attack(void) const
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

