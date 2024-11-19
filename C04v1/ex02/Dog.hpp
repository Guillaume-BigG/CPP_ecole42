#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"


class Dog : public AAnimal
{
	public:
		Dog();
		Dog(Dog const & src);
		~Dog();

        Dog	&operator=(Dog const &rhs);

		void		makeSound(void) const;

    private:
		Brain	*_brain;
};

#endif