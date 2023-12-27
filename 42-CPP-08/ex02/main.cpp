#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mystack;

    mystack.push(5);
    mystack.push(17);
    std::cout << std::endl;


    std::cout << "top: " << mystack.top() << std::endl;
    mystack.pop();
    std::cout << std::endl;
    std::cout << "size: " << mystack.size() << std::endl;
    std::cout << "top: " << mystack.top() << std::endl;


    mystack.push(3);
    mystack.push(5);
    mystack.push(737);
    mystack.push(0);


    std::cout << std::endl;
    for (MutantStack<int>::iterator it = mystack.begin(); it != mystack.end(); ++it)
        std::cout << "{" << *it << "} ";
    std::cout << std::endl;
    std::cout << std::endl;

    try
    {
        MutantStack<int> myemptystack;
        std::cout << myemptystack.top() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
