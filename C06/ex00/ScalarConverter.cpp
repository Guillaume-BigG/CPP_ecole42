#include "ScalarConverter.hpp"



ScalarConverter::ScalarConverter() 
{

}

ScalarConverter::~ScalarConverter() 
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &src) 
{
	*this = src;
}

ScalarConverter		&ScalarConverter::operator=(const ScalarConverter &rhs) 
{
    static_cast <void>(rhs);
	return (*this);
}

bool	ScalarConverter::checkLiteral(std::string &literal)
{
    int count = 0;
    std::string::iterator it = literal.begin();
    if (*it == '+' || *it == '-')
    {
        it++;
    }
	for (; it != literal.end(); ++it)
	{
        if(std::isdigit(*it))
            continue;
        else if (*it == '.')
        {
            if(count == 0)
                count = 1;
            else 
                return false;
        }
        else
            return false;
	}
	return true;
}

bool	ScalarConverter::checkDigit(std::string &literal)
{
    std::string::iterator it = literal.begin();
    if (*it == '+' || *it == '-')
    {
        it++;
    }
	for (; it != literal.end(); ++it)
		{
            if(!std::isdigit(*it))
                return false;
		}
	return true;
}

void	ScalarConverter::convert(std::string &literal) 
{
	int			to_Int = 0;
	float		to_Float = 0;
	double		to_Double = 0;
    char        to_Char = '\0';
	std::string	f_extra[3] = {"-inff", "+inff", "nanf"};
    std::string	d_extra[3] = {"-inf", "+inf", "nan"};
    std::string input = "";
    int flag = 0;

    for (int i = 0; i < 3; ++i) 
    {
		if (literal == f_extra[i]) 
        {
			input = "float";
            to_Float = std::atof(literal.c_str());
            to_Double = std::atof(literal.c_str());
            flag = 1;
			break ;
		}
        else if (literal == d_extra[i]) 
        {
			input = "double";
            to_Float = std::atof(literal.c_str());
            to_Double = std::atof(literal.c_str());
            flag = 1;
			break ;
		}
	}
    if (literal.length() == 1 && !std::isdigit(literal[0]))
        input = "char";
    else if (literal[literal.length() - 1] == 'f' && checkLiteral(literal.erase(literal.length() - 1, 1)))
       input = "float";
    else if (checkDigit(literal))
        input = "int";
    else if (checkLiteral(literal))
        input = "double";
    if(input.empty())
    {
        std::cout << "Please provide a proper literal" << std::endl;
        return;
    }

// Explicit Conversion depending on type
    if (input == "char")
    {
        to_Char = literal[0];
        to_Int	= static_cast<int>(to_Char);
	    to_Float	= static_cast<float>(to_Char);
	    to_Double	= static_cast<double>(to_Char);
    }
    else if (input == "int")
    {
        std::stringstream ss(literal);
        ss >> to_Int;
        if (ss.fail() || !ss.eof()) 
        {
            std::cout << "Your int input is not valid or not within int limit." << std::endl;
            return;
        }
        if (to_Int > 31 && to_Int < 127)
        {
            to_Char = static_cast<char>(to_Int);
        }
	    to_Float	= static_cast<float>(to_Int);
	    to_Double	= static_cast<double>(to_Int);
    }
    else if (input == "float" && flag==0)
    {
        std::stringstream ss(literal);
        ss >> to_Float;
        if (ss.fail() || !ss.eof()) {
            std::cout << "Invalid input: not a valid float!" << std::endl;
            return;
        }
        if (to_Float > std::numeric_limits<float>::max() || to_Float < -std::numeric_limits<float>::max()) {
            std::cout << "Your input is not within float limit!" << std::endl;
            return;
        }
	    to_Int	= static_cast<int>(to_Float);
        if (to_Int > 31 && to_Int < 127)
        {
            to_Char = static_cast<char>(to_Float);
        }
	    to_Double	= static_cast<double>(to_Float);
    }
    else if (input == "double" && flag==0)
    {
        std::stringstream ss(literal);
        ss >> to_Double;
        if (ss.fail() || !ss.eof()) {
            std::cout << "Invalid input: not a valid double!" << std::endl;
            return;
        }
        if (to_Double > std::numeric_limits<double>::max() || to_Double < -std::numeric_limits<double>::max()) {
            std::cout << "Your input is not within double limit!" << std::endl;
            return;
        }
	    to_Int	= static_cast<int>(to_Double);
        if (to_Int > 31 && to_Int < 127)
        {
            to_Char = static_cast<char>(to_Double);
        }
	    to_Float	= static_cast<float>(to_Double);
    }

    // Printing the messages
    if (to_Char == '\0' && flag == 0)
        std::cout << "char: Non Displayable" << std::endl;
    else if (flag == 1)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: '" << to_Char << "'" << std::endl;
    if (flag == 1)
    	std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << to_Int << std::endl;
    if ( to_Float - to_Int == 0)
        std::cout << "float: " << to_Float << ".0f" << std::endl;
    else 
        std::cout << "float: " << to_Float << "f" << std::endl;
    if ( to_Double - to_Int == 0)
		std::cout << "double: " << to_Double << ".0" << std::endl;
    else
        std::cout << "double: " << to_Double << std::endl;
        
}