#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const & src);
		~WrongCat();

        WrongCat	&operator=(WrongCat const &rhs);

		void		makeSound(void) const;

    private:

};

#endif