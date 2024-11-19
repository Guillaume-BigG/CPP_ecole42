#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character(std::string name);
		Character(Character const & src);
		~Character(void);

		Character const & operator=(Character const & rhs);

		std::string const & getName(void) const;
	    void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string		_name;
		AMateria		*_inventory[4];
};

#endif