#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>

class	Point
{
public:

	Point(void);
	Point(Point const & src);
	Point(float const p1, float const p2);
	~Point(void);

	Point &	operator=(Point const & rhs);
	
	Fixed	const getX(void) const;
	Fixed	const getY(void) const;

private:

	Fixed const	_x;
	Fixed const	_y;
};

bool			bsp(Point const a, Point const b, Point const c, Point const point);
std::ostream &	operator<<(std::ostream & o, Point const & i);

#endif