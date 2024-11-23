#pragma once

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <climits>
#include <limits>

class ScalarConverter
{

	public:
		~ScalarConverter();
		ScalarConverter	& operator=(const ScalarConverter &rhs);

		static void		convert(std::string &literal);
        static bool checkLiteral(std::string &literal) ;
        static bool checkDigit(std::string &literal);
    
    private:
		ScalarConverter(); // class non intentiable from user
		ScalarConverter(const ScalarConverter &src);

};