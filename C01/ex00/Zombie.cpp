# include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	std::cout << "Zombie created" << std::endl;
	_name = name;
	std::cout << "Hi " << _name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destroyed: " << _name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}