#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

template<typename T>
void	swap(T &x, T &y) 
{
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T const & min( T const & x, T const & y) 
{
	return (x < y ? x : y);
}

template<typename T>
T const &	max( T const & x, T const & y)
{
return ( x > y ? x : y );
}