#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point(0) 
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) 
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixed_point = rhs.getRawBits();
	return (*this);
}

Fixed::Fixed(int const parameter) 
{
	// std::cout << "Int constructor called" << std::endl;
	this->_fixed_point = parameter * (1 << _fract_bit);
}

Fixed::Fixed(float const parameter) 
{
	// std::cout << "Float constructor called" << std::endl;
	this->_fixed_point = roundf(parameter * (1 << _fract_bit));
}

Fixed::~Fixed() 
{
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const 
{
	return (_fixed_point);
}

void Fixed::setRawBits(int const raw) 
{
	_fixed_point = raw;
}

float Fixed::toFloat(void) const 
{
	return (static_cast<float>(this->_fixed_point) / (1 << _fract_bit));
}

int Fixed::toInt(void) const 
{
	return (this->_fixed_point / (1 << _fract_bit));
}

// Comparison operators overloads:
bool Fixed::operator>(Fixed const &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

// Arithmetics operators overloads:
Fixed Fixed::operator+(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
		// call the fixed float  constructor
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	if (rhs.getRawBits() == 0) 
	{
            std::cout << "Division by 0, end of calc" << std::endl;
			return (Fixed());
    }
	return (Fixed(this->toFloat() / rhs.toFloat()));
}


// << ++a -> convert a to float, add 1, and convert 1 to float 
// Increment and decrement operators overloads:
// 1/256 for -- et ++ cause 0 + 1/256 because when we call << we ask to convert 1 to float.
Fixed &Fixed::operator--() 
{
	--_fixed_point;
	return (*this);
}

Fixed &Fixed::operator++()
{
	++_fixed_point;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	--(*this);
	return (tmp);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	++(*this);
	return (tmp);
}

// Member functions overloads:
Fixed &Fixed::min(Fixed &nb1, Fixed &nb2)
{
	if (nb1.getRawBits() < nb2.getRawBits())
		return (nb1);
	return (nb2);
}

Fixed const &Fixed::min(Fixed const &nb1, Fixed const &nb2)
{
	if (nb1.getRawBits() < nb2.getRawBits())
		return (nb1);
	return (nb2);
}

Fixed &Fixed::max(Fixed &nb1, Fixed &nb2)
{
	if (nb1.getRawBits() > nb2.getRawBits())
		return (nb1);
	return (nb2);
}

Fixed const &Fixed::max(Fixed const &nb1, Fixed const &nb2)
{
	if (nb1.getRawBits() > nb2.getRawBits())
		return (nb1);
	return (nb2);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) 
{
	o << rhs.toFloat();
	return (o);
}

const int Fixed::_fract_bit = 8; 