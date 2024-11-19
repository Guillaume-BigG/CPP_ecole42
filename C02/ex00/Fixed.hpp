#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
  public:
	Fixed();
	Fixed(Fixed const &src);
	Fixed &operator=(Fixed const &rhs);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	
  private:
	int _fixed_point;
	static const int _fract_bit;
};


#endif