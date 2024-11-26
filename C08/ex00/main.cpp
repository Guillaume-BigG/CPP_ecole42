#include <vector>
#include <list>
#include "easyfind.hpp"

int	main() 
{

	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);

	std::list<int> lst;
	lst.push_back(2);
	lst.push_front(1);
	lst.push_back(3);
	lst.push_back(4);



    ////////////////////////VECTOR////////////////////////
	std::cout << "VECTOR:" << std::endl;
  for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
      std::cout << *it << " ";
  std::cout << std::endl;
	std::cout << "Searching in 3:" << std::endl;
	try
  {
		easyfind<std::vector<int> >(vec, 3);
  }
  catch (const std::exception& e)
	{
    std::cerr << e.what() << std::endl;
  }	
	std::cout << "Searching in 10:" << std::endl;
	try
  {
		easyfind<std::vector<int> >(vec, 10);
  }
  catch (const std::exception& e)
  {
	  std::cerr << e.what() << std::endl;
  }

    ////////////////////////LIST////////////////////////
	std::cout << "LIST:" << std::endl;
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
	std::cout << "Searching in 3:" << std::endl;
	try
    {
		easyfind<std::list<int> >(lst, 3);
    }
    catch (const std::exception& e)
	{
        std::cerr << e.what() << std::endl;
    }	
	std::cout << "Searching in 10:" << std::endl;
	try
    {
		easyfind<std::list<int> >(lst, 10);
    }
    catch (const std::exception& e)
    {
		std::cerr << e.what() << std::endl;
    }

    return (0);
}