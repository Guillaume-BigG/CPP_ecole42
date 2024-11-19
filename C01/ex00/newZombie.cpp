#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie* walking_dead = new Zombie(name);
	return(walking_dead);
}
