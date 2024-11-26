#pragma once

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstddef>
#include <string>

template<typename T, typename K>
void	iter(T* array, std::size_t length, void (*f)(K &)) {
	for (std::size_t i = 0; i < length; ++i) 
    {
		f(array[i]);
	}
}
