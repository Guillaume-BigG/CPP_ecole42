# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zombiecrew = new Zombie[N];
	if(zombiecrew)
	{
		for(int i = 0; i < N; i++)
			zombiecrew[i].set_name(name);
		return (zombiecrew);
	}
	else
		exit(1);
} 