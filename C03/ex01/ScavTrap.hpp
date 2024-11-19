# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);

		ScavTrap & operator=(ScavTrap const & rhs);

		void guardGate(void);
		void attack(const std::string &target);

	private:

};

#endif