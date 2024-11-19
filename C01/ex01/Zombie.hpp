#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iomanip>
# include <iostream>
# include <string>
#include <limits>
#include <bits/stdc++.h> //for exit

class Zombie
{
  public:
	Zombie(void);
	Zombie(std::string _name);
	~Zombie(void);

	void announce(void);
	void set_name(std::string _name);

  private:
	std::string _name;
	static int _count;
};

Zombie* zombieHorde( int N, std::string name );

#endif
