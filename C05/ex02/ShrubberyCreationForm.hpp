#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(std::string name);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rhs);

		void	execute(const Bureaucrat &executor) const;
	
	private:
		std::string	_target;
		ShrubberyCreationForm();
};