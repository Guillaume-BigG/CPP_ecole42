#include "MutantStack.hpp"
# include <list>


int main()
{

    std::cout << "List Example" << std::endl;
    std::list<int> mlist;
    mlist.push_back(5);
    mlist.push_back(17);
	std::cout << "Top element: " << mlist.back()<< std::endl;
	std::cout << "Stack size: " << mlist.size() << std::endl;
	mlist.pop_back();
	std::cout << "Top element after pop: " << mlist.back() << std::endl;
	std::cout << "Stack size after pop: " << mlist.size() << std::endl;
    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    //[...]
    mlist.push_back(0);
    std::list<int>::iterator it = mlist.begin();
    std::list<int>::iterator ite = mlist.end();
    ++it;
    --it;
    std::cout << "List Iteration" << std::endl;
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    std::list<int> s(mlist);

    std::cout << "\n\nMsMutant Example" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
	std::cout << "Top element: " << mstack.top()<< std::endl;
	std::cout << "Stack size: " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "Top element after pop: " << mstack.top() << std::endl;
	std::cout << "Stack size after pop: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it1 = mstack.begin();
    MutantStack<int>::iterator ite1 = mstack.end();
    ++it1;
    --it1;
   std::cout << "Stack Iteration" << std::endl;
    while (it1 != ite1)
    {
        std::cout << *it1 << " ";
        ++it1;
    }
    std::stack<int> r(mstack);
    return 0;
}





// }