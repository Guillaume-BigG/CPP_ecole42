#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string name);
		~RobotomyRequestForm();

		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);

		void	execute(const Bureaucrat &executor) const;

	private:
		std::string	_target;
		RobotomyRequestForm();
};