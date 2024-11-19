#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
}

Point::Point(float const p1, float const p2) : _x(p1), _y(p2)
{
}

Point::Point(Point const & src) : _x(src.getX()), _y(src.getY())
{
}

Point::~Point(void)
{
}

Point & Point::operator=(Point const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Point const & i)
{
	o << (i.getX()).toFloat() << (i.getY()).toFloat() << std::endl;
	return o;
}


Fixed	const Point::getX(void) const
{
	return _x;
}

Fixed	const Point::getY(void) const
{
	return _y;
}