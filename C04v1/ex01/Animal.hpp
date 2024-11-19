#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
#include <string>

#include "Brain.hpp"


class Animal
{
	public:
		Animal();
		Animal(Animal const & src);
		virtual ~Animal(void); // Virtual so that we call the derived class destructor through the use of the pointer

		Animal &			operator=(Animal const & rhs);
		
		std::string			getType(void) const;
		virtual void		makeSound(void) const;

	protected:
		std::string			_type;
};

#endif