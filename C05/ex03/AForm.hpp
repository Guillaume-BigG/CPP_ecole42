#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

	public:
		AForm();
		virtual ~AForm();
		AForm(std::string _name, int signGrade, int empl_grade);
		AForm(AForm const &src);
		AForm	&operator=(AForm const &rhs);

		std::string const	getName() const;
		bool				getIs_Signed() const;
		int					getRequiredGrade() const;
		int 				getExecGrade() const;

		bool				beSigned( Bureaucrat const &bureaucrat);
		virtual void		execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception 
		{
			public:
				virtual const char* what() const throw() 
				{
					return ("Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception 
		{
			public:
				virtual const char* what() const throw() 
				{
					return ("Grade is too low");
				}
		};
	
	private:
		std::string const	_name;
		bool				_is_signed;
		int const			_requir_grade;
		int const			_exec_grade;
};

std::ostream	&operator<<(std::ostream &out, AForm const &AForm);
