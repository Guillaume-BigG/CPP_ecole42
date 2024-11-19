#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string> 
# include <iostream> 
# include <iomanip>
# include <cctype> 
# include <limits> 

class Contact
{
	public:
		Contact();
		~Contact();

		void	create_contact(int index);
		void	display_index(int index) const;
		void	display_all(int index) const;
		int		get_index(void) const;

	private:

		int			_index;
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phonenumber;
		std::string	_darkestsecret;
		std::string	_checkinfo(const std::string prompt) const;
		int		_check_input(std::string str) const;
		std::string	_set_display(std::string str) const;
};


#endif