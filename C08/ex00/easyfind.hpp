#pragma once

#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception 
{
	public:
		virtual const char* what() const throw() 
        {
			return "Value not found in the container.";
		}
};

template<typename T>
void	easyfind(const T& container, int nb) 
{
    typename T::const_iterator begin = container.begin();
	typename T::const_iterator end = container.end();
	typename T::const_iterator it = std::find(begin, end, nb);
	if (it != end) 
		std::cout << "Found " << nb << " in the container." << std::endl;
    else 
		throw NotFoundException();
}