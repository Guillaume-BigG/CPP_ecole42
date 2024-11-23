
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
	int	grade;
	int	grade_sign;
	int	grade_exec;

	std::string empl_name;
	std::string form_name;
	std::stringstream ss;
	std::string ind_str;
	while (true)
	{
		std::cout << "What's your bureaucrat name ? ";
		getline(std::cin >> std::ws, empl_name);
		if (std::cin.eof())
			return (0);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Error with Getline function, please try again";
			continue ;
		}
		if (!check_name(empl_name))
		{
			std::cout << "What kind of name is that" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue ;
		}
		while (true)
		{
			std::cout << std::endl << "What grade did he/she get ?: ";
			getline(std::cin >> std::ws, ind_str);
			ss.clear(); // Clear the stringstream's flags
			ss.str(""); // Clear the contents of the stringstream
			ss << ind_str;
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
	std::cout << std::endl;
	while (true)
	{
		std::cout << "What's your form name ? ";
		getline(std::cin >> std::ws, form_name);
		if (std::cin.eof())
			return (0);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Error with Getline function, please try again";
			continue ;
		}
		if (!check_name(form_name))
		{
			std::cout << "What kind of name is that" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue ;
		}
		while (true)
		{
			std::cout << std::endl << "What grade does the form need to be signed?: ";
			getline(std::cin >> std::ws, ind_str);
			ss.clear(); // Clear the stringstream's flags
			ss.str(""); // Clear the contents of the stringstream
			ss << ind_str;
			ss >> grade_sign;
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
			while (true)
			{
				std::cout << std::endl << "What grade does the form need to be executed?: ";
				getline(std::cin >> std::ws, ind_str);
				ss.clear(); // Clear the stringstream's flags
				ss.str(""); // Clear the contents of the stringstream
				ss << ind_str;
				ss >> grade_exec;
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
					ss.ignore(std::numeric_limits<std::streamsize>::max(),
						'\n');
					std::cout << "Invalid grade ,please enter an int" << std::endl;
					continue ;
				}
				break ;
			}
			break ;
		}
		break ;
	}
	try
	{
		Bureaucrat employee(empl_name, grade);
		Form form(form_name, grade_sign, grade_exec);
		std::cout << "employee :" << employee << std::endl;
		std::cout << form << std::endl;
		
		employee.signForm(form);
		std::cout << std::endl;
	
		std::cout << "employee :" << employee << std::endl;
		std::cout << "form :" << form << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << std::endl;
	}
}
