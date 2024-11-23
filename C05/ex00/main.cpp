#include "Bureaucrat.hpp"
#include <limits>
#include <sstream>

bool	check_name(const std::string &name)
{
	for (std::string::const_iterator it = name.begin(); it != name.end(); ++it)
	{
		if (!isalpha(*it))
			return (false);
	}
	return (true);
}

int	main(void)
{
	int grade;

	std::string name;
	std::stringstream ss;
	std::string index_str;
	while (true)
	{
		std::cout << "What's your bureaucrat name ? ";
		getline(std::cin >> std::ws, name);
		if (std::cin.eof())
			return (0);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Error with Getline function, please try again";
			continue ;
		}
		if (!check_name(name))
		{
			std::cout << "What kind of name is that" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue ;
		}
		while (true)
		{
			std::cout << std::endl << "What grade did he/she get ?: ";
			getline(std::cin >> std::ws, index_str);
			ss.clear(); // Clear the stringstream's flags
			ss.str(""); // Clear the contents of the stringstream
			ss << index_str;
			ss >> grade;
			if (std::cin.eof())
				return (0);
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
					'\n');
				std::cout << "Error with Getline function,please try again" << std::flush;
				continue ;
			}
			if (ss.fail())
			{
				ss.clear();
				ss.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Invalid grade ,please enter an int" << std::endl;
				continue ;
			}
			break ;
		}
		break ;
	}
	try
	{
		Bureaucrat employee1(name, grade);
		Bureaucrat employee2(name, grade);
		std::cout << "1 :" << employee1 << std::endl;
		for (int i = 0; i < 10; i++)
		{
			employee1.decrementGrade();
		}
		std::cout << "1 :" << employee1 << std::endl;
		for (int i = 0; i < 10; i++)
		{
			employee1.incrementGrade();
		}
		std::cout << "1 :" << employee1 << std::endl;

		std::cout << "2 :" << employee2 << std::endl;
		for (int i = 0; i < 10; i++)
		{
			employee2.incrementGrade();
		}
		std::cout << "2 :" << employee2 << std::endl;
		for (int i = 0; i < 10; i++)
		{
			employee2.decrementGrade();
		}
		std::cout << "2 :" << employee2 << std::endl;
		std::cout << "1 :" << employee1 << std::endl;
		std::cout << "2 :" << employee2 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}