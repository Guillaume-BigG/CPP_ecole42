#pragma once

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stdint.h>

typedef struct s_Data 
{
	int	i;
    void	*ptr;
} Data;


class Serializer
{


	public:
		~Serializer();

		Serializer	&operator=(const Serializer &rhs);

		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw); //It is guaranteed to be large enough to hold a pointer without losing information. It provides a portable way to perform integer operations on pointers.
        
    private:
		Serializer();
		Serializer(const Serializer &src);
};