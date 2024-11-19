#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & src);
		virtual ~WrongAnimal(); // Virtual so that we call the derived class destructor through the use of the pointer

		WrongAnimal &			operator=(WrongAnimal const & rhs);
		
		std::string			getType(void) const;
		void		makeSound(void) const;

	protected:
		std::string			_type;
};

#endif