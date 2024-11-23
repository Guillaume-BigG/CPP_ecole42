#include "Intern.hpp"

Intern::Intern() 
{

}

Intern::~Intern() 
{

}

Intern::Intern(const Intern &src) 
{
	*this = src;
}

Intern	&Intern::operator=(const Intern &rhs) {
	(void) rhs;
	return (*this);
}

AForm	*Intern::makeForm(std::string fornName, std::string target) 
{
	std::string	formArr[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm		*forms[] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	AForm		*result = NULL;

	for (int i = 0; i < 3; i++) 
    {
		if (fornName == formArr[i]) 
        {
			result = forms[i];
			std::cout << "Intern creates " << result->getName() << " form." << std::endl;
		} 
		else 
        {
			delete forms[i];
		}
	}
	if (!result)
    {
		std::cout << "No form exist with the following name: " << fornName << std::endl;
	}
	return (result);
}
