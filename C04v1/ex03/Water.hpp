#ifndef WATER_HPP
# define WATER_HPP

# include "AMateria.hpp"


class Water : public AMateria
{
	public:
		Water();
		Water(Water const & src);
		~Water();

		Water const & operator=(Water const & rhs);

		virtual AMateria*	clone(void) const;
		virtual void		use(ICharacter & target);

    private:


};

#endif