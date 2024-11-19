#include <string>
#include <iostream>

int main(void)
{
	std::string sentence("HI THIS IS BRAIN");
	std::string *stringPTR = &sentence;
	std::string &stringREF = sentence;

	std::cout << "The memory address of the string variable: " << &sentence << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "The value of the string variable: " << sentence << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	return(0);
}