#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm::AForm("Presidential", 25, 5), _target(target) 
{

}

PresidentialPardonForm::~PresidentialPardonForm() 
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) 
{
	*this = src;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) 
{
	if (this != &rhs) {
		_target = rhs._target;
	}
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    // Ensure the form is signed before attempting execution
    if (!getIs_Signed()) 
    {
        throw AForm::GradeTooLowException(); // Form must be signed first
    }

    // Check if executor's grade is sufficient
    if (executor.getGrade() > this->getExecGrade()) 
    {
        throw AForm::GradeTooLowException(); // Grade too low for execution
    }
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
