#include "Fixed.hpp"

Fixed::Fixed(): _fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &rhs)
		this->_fixed_point = rhs.getRawBits();
	return *this;
}

Fixed::Fixed(int const parameter) 
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point = parameter * (1 << _fract_bit); //for visibility sake, see below the equivalance.
}

Fixed::Fixed(float const parameter) 
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point = roundf(parameter * (1 << _fract_bit));  //(equivalent to parameter * 2^frac_bit ) or param << frac_bit
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return _fixed_point;
}


void	Fixed::setRawBits(int const raw)
{
	_fixed_point = raw;
}


float	Fixed::toFloat(void) const //Type Safety: static_cast is safer than C-style casts. It checks at compile time whether the conversion is valid. If the conversion is not safe or does not make sense, it will generate a compile-time error.
{
	return static_cast<float>(this->_fixed_point) / (1 << _fract_bit); // cant use the thing below cause we wnat to cast as a float
}

int	Fixed::toInt(void) const
{
	return this->_fixed_point / (1 << _fract_bit);// equivalent to (fixed+point >> _fract_bit)
}


std::ostream &operator<<(std::ostream &o, Fixed const &rhs) 
{
	o << rhs.toFloat();
	return o;
}

const int Fixed::_fract_bit = 8;