#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _grade(0), _name("Empty") 
{
	
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	if (this != &src)
		*this = src;
}
Bureaucrat::Bureaucrat(std::string const name, int grade) : _grade(grade),_name(name)
{
	if (grade < 1)
	{
		throw (Bureaucrat::GradeTooHighException());
	}
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());

}

Bureaucrat const & Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs) 
	{
		this->_grade = rhs.getGrade();
		const_cast <std::string&> (this->_name) = const_cast <std::string&> (rhs._name); // Temporarily remove the 'const' qualifier
	}
	return *this;
}

std::string const Bureaucrat::getName(void) const
{
	return _name;
}

int		Bureaucrat::getGrade(void) const
{
	return _grade;
}

void	Bureaucrat::incrementGrade(void)
{
	_grade--;
	if (_grade < 1)
	{
		_grade = 1;
		throw (Bureaucrat::GradeTooHighException());
	}

}

void	Bureaucrat::decrementGrade(void)
{
	_grade++;
	if (_grade > 150)
	{
		_grade = 150;
		throw (Bureaucrat::GradeTooLowException());
	}
}

void Bureaucrat::signForm(Form &form)
{
	if(form.beSigned(*this) == true)
	{
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	else 
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << "because his grade is "\
		<< this->getGrade() << " while the form need at least an employee of rank " << form.getRequiredGrade() \
		<< " so the employee needs " << form.getRequiredGrade() - this->getGrade() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &employee)
{
	o << employee.getName() << ", bureaucrat grade " << employee.getGrade() << ".";
	return (o);
}
