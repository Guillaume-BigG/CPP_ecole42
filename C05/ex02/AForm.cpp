#include "AForm.hpp"

AForm::AForm() : _name("Empty"), _is_signed(false), _requir_grade(0), _exec_grade(0) 
{

}

AForm::~AForm() 
{

}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _is_signed(false), _requir_grade(signGrade), _exec_grade(execGrade)
{	
	if (signGrade < 1 || execGrade < 1) {
		throw (AForm::GradeTooHighException());
	} else if (signGrade > 150 || execGrade > 150) {
		throw (AForm::GradeTooLowException());
	}
}

AForm::AForm(AForm const &src) : _name(src.getName()), _is_signed(false), _requir_grade(src.getRequiredGrade()), _exec_grade(src.getExecGrade())
{
	*this = src;
}

AForm	&AForm::operator=(AForm const &rhs) 
{
	if (this != &rhs) 
		_is_signed = rhs.getIs_Signed();
	return *this;
}

std::string const	AForm::getName() const 
{
	return _name;
}

bool	AForm::getIs_Signed() const 
{
	if (_is_signed == true)
		return true;
	return false;
}

int	AForm::getRequiredGrade() const 
{
	return _requir_grade;
}

int	AForm::getExecGrade() const 
{
	return _exec_grade;
}

bool	AForm::beSigned( Bureaucrat const &bureaucrat) 
{	
	if (bureaucrat.getGrade() <= this->_requir_grade) 
	{
		_is_signed = true;
		return (true);
	}
	else 
	{
		throw AForm::GradeTooLowException();
	}
}

std::ostream	&operator<<(std::ostream &out, AForm const &form) 
{
	out << "Form : " << form.getName() << std::endl;
	out << "Signed : " << form.getIs_Signed() << std::endl;
	out << "Required Grade : " << form.getRequiredGrade() << std::endl;
	out << "Executable Grade : " << form.getExecGrade() << std::endl;
	return (out);
}
