#include "Span.hpp"

Span::Span() : _size(0) 
{
	std::cout << "Default constructor" << std::endl;
}

Span::Span(unsigned int size) : _size(size) 
{
    std::cout << "Int constructor" << std::endl;
}

Span::~Span() 
{
    std::cout << "Destructor called " << std::endl;
}

Span::Span(const Span &src) 
{
    *this = src; 
}

Span	&Span::operator=(const Span &rhs) 
{
	if (this != &rhs)
		this->_size = rhs._size;
	return (*this);
}

void	Span::addNumber(int n) 
{
	if (_vector.size() >= _size)
		throw FullException();
	_vector.push_back(n);
}

int	Span::shortestSpan() const 
{
	if (_vector.size() <= 1)
		throw InsufficientException();
	std::vector<int> tmp = _vector;
	std::sort(tmp.begin(), tmp.end());
	int	shortest_span = std::numeric_limits<int>::max();
	for (size_t i = 1; i < tmp.size(); ++i) 
    {
		int	span = tmp[i] - tmp[i - 1];
		if (span < shortest_span)
			shortest_span = span;
	}
	return (shortest_span);
}

int	Span::longestSpan() const 
{
	if (_vector.size() <= 1) 
		throw InsufficientException();

    std::vector<int> tmp = _vector;
	std::sort(tmp.begin(), tmp.end());
	// std::vector<int>::const_iterator minIt = std::min_element(_vector.begin(), _vector.end());
	// std::vector<int>::const_iterator maxIt = std::max_element(_vector.begin(), _vector.end());
    return (*(tmp.end()-1) - *tmp.begin()); //temp is a pointer to the first elemet past our array/vector etc so -1
}

void	Span::getVector(void) const
{
    for (std::vector<int>::const_iterator it = _vector.begin(); it != this->_vector.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}
