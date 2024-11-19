#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();

		Ice(Ice const &src);
		Ice	const &operator=(Ice const &rhs);

		virtual	AMateria	*clone(void) const;
		virtual void		use(ICharacter &target);

    private:

};

#endif