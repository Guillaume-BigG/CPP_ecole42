#include "Harl.hpp"

Harl::Harl() {

}

Harl::~Harl() {

}

void	Harl::_debug(void)
{
	std::cout << std::endl;
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << std::endl;
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << std::endl;
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << " I’ve been coming here for years and you just started working here last month" << std::endl;
}

void	Harl::_error(void)
{
	std::cout << std::endl;
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

void	Harl::_other(void)
{
	std::cout << std::endl;
	std::cout << "[Probably complaining about insignificant problems]" << std::endl << std::endl;
}
void	Harl::complain(std::string level) 
{
	std::string	levelArrName[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int	i = 0;

	while (i < 4 && levelArrName[i].compare(level))
		i++;
	switch (i)
	{
		case (0): 
			this->_debug();
		case (1):
			this->_info();
		case (2):
			this->_warning();
		case (3):
			this->_error();
			break;
		default: 
			_other();
			break;

	}
}