#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iomanip>
# include <iostream>
# include <string>
# include <limits>

class Zombie
{
  public:
	Zombie(void);
	Zombie(std::string _name);
	~Zombie(void);
	
	void announce(void);

  private:
	std::string _name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
