#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed
{
  public:
	Fixed();
	Fixed(Fixed const &src);
	Fixed &operator=(Fixed const &rhs);
	Fixed(int const parameter);
	Fixed(float const parameter);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

  private:
	int _fixed_point;
	static const int _fract_bit;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif