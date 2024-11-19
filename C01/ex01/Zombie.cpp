# include "Zombie.hpp"

Zombie::Zombie()
{
	_count++;
}

Zombie::Zombie(std::string name)
{
	std::cout << "Zombie created" << std::endl;
	_name = name;
	std::cout << "Hi " << _name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destroyed: " << _name << " " << _count << std::endl;
	_count--;
}

void Zombie::set_name(std::string name)
{
	_name = name;
}

void Zombie::announce(void)
{
	std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

int Zombie::_count = 0;