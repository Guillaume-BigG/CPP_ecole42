#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

int	Contact::_check_input(std::string str) const
{
	for (std::string::iterator it = str.begin(); it != str.end(); ++it)
		{
			if (!std::isalnum(*it))
				return (0);
		}
	return (1);
}

std::string	Contact::_checkinfo(const std::string prompt) const
{
	std::string	input;

	while (!std::cin.eof())
	{
		std::cout << prompt << std::endl;
		std::getline(std::cin >> std::ws, input);
		std::cout << std::endl;
		if (std::cin.fail())
		{
        	std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Error with Getline function, please try again";
        }
		else if (_check_input(input))
			break ;
		else 	
			std::cout << "Invalid input, must be alpha numeric" << std::endl;
	}
	return (input);
}

void	Contact::create_contact(int index)
{
	this->_firstname = _checkinfo("Please enter your contact's first name :");
	this->_lastname = _checkinfo("Please enter your contact's last name: ");
    this->_nickname = _checkinfo("Please enter your contact's nickname: ");
    this->_phonenumber = _checkinfo("Please enter your contact's phone number: ");
    this->_darkestsecret = _checkinfo("Please enter your contact's darkest secret: ");
	this->_index = index;
	std::cout << "                 ~~~~~~                 " << std::endl;
}

std::string	Contact::_set_display(std::string str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::display_all(int index) const
{
	std::cout << "|" << std::setw(10) << index;
	std::cout << "|" << std::setw(10) << this->_set_display(this->_firstname);
	std::cout << "|" << std::setw(10) << this->_set_display(this->_lastname);
	std::cout << "|" << std::setw(10) << this->_set_display(this->_nickname);
	std::cout << "|" << std::endl;
}

void	Contact::display_index(int index) const
{
	std::cout << "Index : " << index << std::endl;
	std::cout << "First Name: " << this->_firstname << std::endl;
	std::cout << "Last Name: " << this->_lastname << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phonenumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestsecret << std::endl << std::endl;
}