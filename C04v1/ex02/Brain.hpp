#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{

	public:
		Brain();
		virtual ~Brain();

		Brain(Brain const &src);
		Brain	&operator=(Brain const &rhs);	
    
    private:
		std::string	_ideas[100];

};

#endif