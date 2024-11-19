#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"


class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const & src);
		~Cure();

		Cure const & operator=(Cure const & rhs);

		virtual AMateria*	clone(void) const;
		virtual void		use(ICharacter & target);

    private:


};

#endif