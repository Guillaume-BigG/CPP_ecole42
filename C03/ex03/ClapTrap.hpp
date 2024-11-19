#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
  public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);

	ClapTrap &operator=(ClapTrap const &rhs);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName(void) const;
	int getHitPoints(void) const;
	int getEnergyPoints(void) const;
	int getAttDam(void) const;
	void setName(std::string name);
	void setHitPoints(int amount);
	void setEnergyPoints(int amount);
	void setAttackDammage(int amount);

  protected:
	std::string _name;
	unsigned int _hit_points;
	unsigned int _energy;
	unsigned int _att_dam;
};

#endif