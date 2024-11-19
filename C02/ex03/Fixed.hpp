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

	bool operator>(Fixed const &rhs) const;
	bool operator<(Fixed const &rhs) const;
	bool operator>=(Fixed const &rhs) const;
	bool operator<=(Fixed const &rhs) const;
	bool operator==(Fixed const &rhs) const;
	bool operator!=(Fixed const &rhs) const;

	Fixed operator+(Fixed const &rhs) const;
	Fixed operator-(Fixed const &rhs) const;
	Fixed operator*(Fixed const &rhs) const;
	Fixed operator/(Fixed const &rhs) const;

	Fixed &operator--();   // --x
	Fixed &operator++();   // ++x
	Fixed operator--(int); // x--
	Fixed operator++(int); // x++

	static Fixed &min(Fixed &nb1, Fixed &nb2);
	static Fixed const &min(Fixed const &nb1, Fixed const &nb2);
	static Fixed &max(Fixed &nb1, Fixed &nb2);
	static Fixed const &max(Fixed const &nb1, Fixed const &nb2);

  private:
	int _fixed_point;
	static const int _fract_bit;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif