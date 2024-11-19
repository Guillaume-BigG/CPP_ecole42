#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "ICharacter.hpp"

class ICharacter; // forward declaration to avoid circular dependency

class AMateria
{

	public:
		AMateria();
		virtual ~AMateria();

		AMateria(std::string const &type);
		AMateria(AMateria const &src);
		AMateria const	&operator=(AMateria const &rhs);

		std::string const & getType(void) const;
	    void setType(std::string const & type);
		
        virtual AMateria * clone() const = 0;
		virtual void use(ICharacter &target);
        
	protected:
	    std::string	_type;

};

#endif