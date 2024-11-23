#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm::AForm("Robotomy", 72, 45), _target(target) 
{

}

RobotomyRequestForm::~RobotomyRequestForm() 
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) 
{
	*this = src;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) 
{
	if (this != &rhs) {
		_target = rhs._target;
	}
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (!getIs_Signed()) 
    {
        throw AForm::GradeTooLowException(); // Form must be signed first
    }
    if (executor.getGrade() > this->getExecGrade()) 
    {
        throw AForm::GradeTooLowException(); // Grade too low for execution
    }
	std::srand(std::time(NULL));
	if (std::rand() % 2 == 1) 
	{
		std::cout << _target << " has been robotomized !" << std::endl;
	} else 
	{
			std::cout << _target << " couldn't be robotomized..." << std::endl;
	}
}

