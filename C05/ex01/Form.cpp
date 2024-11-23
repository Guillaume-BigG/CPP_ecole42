#include "Form.hpp"

Form::Form() : _name("Empty"), _is_signed(false), _requir_grade(0), _exec_grade(0) 
{

}

Form::~Form() 
{

}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _is_signed(false), _requir_grade(signGrade), _exec_grade(execGrade)
{	
	if (signGrade < 1 || execGrade < 1) {
		throw (Form::GradeTooHighException());
	} else if (signGrade > 150 || execGrade > 150) {
		throw (Form::GradeTooLowException());
	}
}

Form::Form(Form const &src) : _name(src.getName()), _is_signed(false), _requir_grade(src.getRequiredGrade()), _exec_grade(src.getExecGrade())
{
	*this = src;
}

Form	&Form::operator=(Form const &rhs) 
{
	if (this != &rhs) {
		Form tmp(rhs);
		*this = tmp;
	}
	return *this;
}

std::string const	Form::getName() const 
{
	return _name;
}

bool	Form::getIs_Signed() const 
{
	if (_is_signed == true)
		return true;
	return false;
}

int	Form::getRequiredGrade() const 
{
	return _requir_grade;
}

int	Form::getExecGrade() const 
{
	return _exec_grade;
}

bool	Form::beSigned(Bureaucrat bureaucrat) 
{
	if (bureaucrat.getGrade() <= this->_requir_grade) 
	{
		_is_signed = true;
		return (true);
	}
	else 
	{
		throw Form::GradeTooLowException();
	}
}

std::ostream	&operator<<(std::ostream &out, Form const &form) {
	out << "Form : " << form.getName() << std::endl;
	out << "Signed : " << form.getIs_Signed() << std::endl;
	out << "Required Grade : " << form.getRequiredGrade() << std::endl;
	out << "Executable Grade : " << form.getExecGrade() << std::endl;
	return (out);
}
