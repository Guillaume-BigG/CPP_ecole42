#ifndef ELEC_HPP
# define ELEC_HPP

# include "AMateria.hpp"


class Elec : public AMateria
{
	public:
		Elec();
		Elec(Elec const & src);
		~Elec();

		Elec const & operator=(Elec const & rhs);

		virtual AMateria*	clone(void) const;
		virtual void		use(ICharacter & target);

    private:


};

#endif