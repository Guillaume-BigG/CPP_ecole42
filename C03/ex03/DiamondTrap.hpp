#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
  public:
	DiamondTrap();
	DiamondTrap(DiamondTrap const &src);
	DiamondTrap(std::string name);
	~DiamondTrap();

	DiamondTrap &operator=(DiamondTrap const &rhs);

	void WhoAmI();
	std::string getName(void) const;
	int getHitPoints(void) const;
	int getEnergyPoints(void) const;
	int getAttDam(void) const;

	using FragTrap::_att_dam;
	using FragTrap::_hit_points;
	using ScavTrap::_energy;
	using ScavTrap::attack;

  private:
	std::string _name;
};

#endif