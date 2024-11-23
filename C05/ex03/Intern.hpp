#pragma once

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();

		Intern(const Intern &other);
		Intern	&operator=(const Intern &rhs);

		AForm	*makeForm(std::string fornName, std::string target);
	
    private:

};
