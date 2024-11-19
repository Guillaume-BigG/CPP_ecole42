#include "PhoneBook.hpp" 

int	main(void)
{
	PhoneBook	yellow_page;
	std::string	input("INITIALIZATION");

	while (!std::cin.eof() && input != "EXIT" && input != "\0")
	{
		std::cout << "Type your command: " << std::flush;
		getline(std::cin >> std::ws, input);
		std::cout << std::endl;
		if (std::cin.fail())
		{
        	std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Error with Getline function, please try again";
        }
		else if (input == "ADD")
			yellow_page.add_contact();
		else if (input == "SEARCH")
			yellow_page.search_contact();

	}
	return (0);
}
