#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"

class AMateria; // forward declaration to avoid circular dependency

class ICharacter
{
	public:
		virtual	~ICharacter() {}
		virtual std::string const	&getName() const = 0;
		virtual void	equip(AMateria *m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter &target) = 0;
    
    private:
};

#endif