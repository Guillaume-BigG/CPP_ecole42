# pragma once

# include <iostream>
# include <list>
# include <vector>
# include <algorithm>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <limits>

class Span 
{
	public:
        Span();
		Span(unsigned int size);
		~Span();

		Span(const Span &src);
		Span &operator=(const Span &rhs);

		void	addNumber(int n);
		int		shortestSpan() const;
		int		longestSpan() const;
        void    getVector(void) const;

		template<typename Iterator>
		void	addRange(Iterator first, unsigned int i) 
        {
			Iterator last;
			if (i < _size)
			{
				last = first + i;
				_size = i;
			}
			else 
				last = first + _size;		
            _vector.insert(_vector.end(), first, last);
		}

		class FullException : public std::exception 
        {
			public:
				virtual const char* what() const throw() 
                {
					return "Span already containing maximum amount of values.";
				}
		};

		class InsufficientException : public std::exception 
        {
			public:
				virtual const char* what() const throw() 
                {
					return "Not enough number to find span.";
				}
		};

	private:
		std::vector<int>	_vector; // we could also use a list with the function list.sort() and the iterator begin/last
		unsigned int 	_size;
};
