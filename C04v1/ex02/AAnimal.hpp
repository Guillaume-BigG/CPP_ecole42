#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
#include <string>

#include "Brain.hpp"


class AAnimal
{
	public:
		AAnimal();
		AAnimal(AAnimal const & src);
		virtual ~AAnimal(void); // Virtual so that we call the derived class destructor through the use of the pointer

		AAnimal &			operator=(AAnimal const & rhs);
		
		std::string			getType(void) const;
		virtual void		makeSound(void) const = 0; //Abstract class now 

	protected:
		std::string			_type;
};

#endif