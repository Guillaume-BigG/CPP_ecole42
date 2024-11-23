#pragma once

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstddef>
#include <string>

template<typename T>
void	iter(T* array, std::size_t length, void (*f)(T &)) {
	for (std::size_t i = 0; i < length; ++i) 
    {
		f(array[i]);
	}
}
