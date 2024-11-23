#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <stdio.h>
#include <string>
#include <iostream>
# include <exception>

class Bureaucrat
{
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat(std::string const name, int grade);
		Bureaucrat const & operator=(Bureaucrat const & rhs);

		std::string const getName(void) const;
		int getGrade(void) const;
		void	incrementGrade(void);
		void	decrementGrade(void); 

		class GradeTooHighException : public std::exception 
		{
			public:
				virtual const char* what() const throw() 
				{
					return ("Grade is too high, max is 1.");
				}
		};

		class GradeTooLowException : public std::exception 
		{
			public:
				virtual const char* what() const throw() 
				{
					return ("Grade is too low, min is 150.");
				}
		};


	protected:

	private:
		int _grade; // 1 is higher grade, 150 lowest possible
		std::string const _name;

};

std::ostream & operator<<(std::ostream &o, Bureaucrat const & employee);

#endif