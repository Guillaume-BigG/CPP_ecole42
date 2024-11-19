#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
# include <sstream>
# include <limits>


class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void search_contact(void) const;
		void add_contact(void);
		void  print_contact(void) const;

	private:
		Contact _phone_contact[8];
		static int _nb_of_contact;
};

#endif