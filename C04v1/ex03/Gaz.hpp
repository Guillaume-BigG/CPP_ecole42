#ifndef GAZ_HPP
# define GAZ_HPP

# include "AMateria.hpp"


class Gaz : public AMateria
{
	public:
		Gaz();
		Gaz(Gaz const & src);
		~Gaz();

		Gaz const & operator=(Gaz const & rhs);

		virtual AMateria*	clone(void) const;
		virtual void		use(ICharacter & target);

    private:


};

#endif