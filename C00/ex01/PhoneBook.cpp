#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{	
    std::cout << std::endl;
	std::cout << "       Welcome to your phonebook" << std::endl;
	std::cout << " ______________________________________" << std::endl;
	std::cout << "*                                      *" << std::endl;
	std::cout << "|    Type ADD to add a new contact     |" << std::endl;
	std::cout << "|                 ----                 |" << std::endl;
	std::cout << "|  Type SEARCH to search for a contact |" << std::endl;
	std::cout << "|                 ----                 |" << std::endl;
	std::cout << "|   Type EXIT to leave your phonebook  |" << std::endl;
	std::cout << "*______________________________________*" << std::endl << std::endl;
	std::cout << "                 ~~~~~~                 " << std::endl;
	std::cout << std::endl;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add_contact(void)
{
	this->_phone_contact[_nb_of_contact % 8].create_contact(_nb_of_contact % 8);
	_nb_of_contact++;
	std::cout << std::endl;
}

void PhoneBook::print_contact(void) const
{
	std::cout << "*-------------------------------------------*" << std::endl;
	std::cout << "|     INDEX|  1ST NAME| LAST NAME|  NICKNAME|" << std::endl;
	for (int i = 0; i < 8; i++)
		this->_phone_contact[i].display_all(i); 
	std::cout << "*-------------------------------------------*" << std::endl;
}

void 	PhoneBook::search_contact(void) const
{
    std::stringstream	ss;
	std::string			index_str;
	int					index_int;

	this->print_contact();
    while (true)
	{	
		std::cout << std::endl;
		std::cout << "Please select index of the contact to display : " << std::flush;
	    getline(std::cin >> std::ws, index_str); 
		ss.clear();  // Clear the stringstream's flags
        ss.str("");  // Clear the contents of the stringstream
        ss << index_str;
	    ss >> index_int;
        if (std::cin.eof())
			return;
        else if (std::cin.fail() )
		{
        	std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Getline error, please retry" << std::flush;
        }
		else if (ss.fail())
		{
            ss.clear();
            ss.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid index, please enter an index between 0 and 7" << std::endl;
		}
		else if(index_int < 0 || index_int > 7)
			std::cout << "Invalid index, please enter an index between 0 and 7" << std::endl;
        else
			break ;
    }
	this->_phone_contact[index_int].display_index(index_int);
	std::cout << "                 ~~~~~~                 " << std::endl;
	std::cout << std::endl;
}

int PhoneBook::_nb_of_contact = 0;