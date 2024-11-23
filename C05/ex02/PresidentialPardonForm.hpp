#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string name);
		~PresidentialPardonForm();

		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &rhs);

		void	execute(const Bureaucrat &executor) const;

	private:
		std::string	_target;
		PresidentialPardonForm();
};
