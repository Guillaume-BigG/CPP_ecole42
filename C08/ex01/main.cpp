#include <cstdlib>
#include <ctime>
#include "Span.hpp"


int main() 
{


    int	N = 3;
	Span		sp(N);

	std::cout << "\nProving addnumber works: " << std::endl;
	try {
		sp.addNumber(0);
		sp.addNumber(42);
		sp.addNumber(44);
		sp.addNumber(43); // will throw the exception
	} 
    catch (const Span::FullException &e) 
    {
		std::cerr  << e.what() << std::endl;
	}
	
	std::cout << "\nSpan:" << std::endl;
    sp.getVector();
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;

	std::cout << "\nZero number : " << std::endl;
    int	N1 = 0;
	Span		sp1(N1);
	std::cout << "Span:" << std::endl;
	try
	{
    	sp1.getVector();
		std::cout << sp1.longestSpan() << std::endl;
		std::cout << sp1.shortestSpan() << std::endl;
	} 
    catch (const Span::FullException &e) 
    {
		std::cerr  << e.what() << std::endl;
	}
	catch (const Span::InsufficientException &e) 
    {
		std::cerr  << e.what() << std::endl;
	}


	std::cout << "\n1 number : " << std::endl;
    int	N2 = 1;
	Span		sp2(N2);
	std::cout << "Span:" << std::endl;
	try
	{
		sp2.addNumber(42);
    	sp2.getVector();
		std::cout << sp2.longestSpan() << std::endl;
		std::cout << sp2.shortestSpan() << std::endl;
	} 
    catch (const Span::FullException &e) 
    {
		std::cerr  << e.what() << std::endl;
	}
	catch (const Span::InsufficientException &e) 
    {
		std::cerr  << e.what() << std::endl;
	}



	std::cout << "\nIt s above 10 000 !: " << std::endl;
	unsigned int N4 = 30000; 
	Span		span(N4);
	std::srand(static_cast<unsigned int>(std::time(NULL))); //randomized the seed
	std::cout << "Adding with iteration: " << std::endl;
	std::vector<int> vector_helper(N4);
	std::generate(vector_helper.begin(), vector_helper.end(), std::rand); //generate a new random number for the entire range of our vector
	try 
	{
		span.addRange(vector_helper.begin(), N4); //add the vector range to our Span
		// span.getVector();
	} 
	catch (const Span::FullException &e) 
	{
		std::cerr << "Error adding number: " << e.what() <<std::endl;
	}
	std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
	std::cout << "Longest span: " << span.longestSpan() << std::endl;
	
	return (0);
}