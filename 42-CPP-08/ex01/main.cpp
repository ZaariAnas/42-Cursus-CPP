#include "Span.hpp"
#include <exception>
#include <ostream>
#include <stdexcept>
#include <vector>

int main()
{
    try 
    {
        {
            Span sp(5);

            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            // sp.addNumber(21);

            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        {
            std::vector<int> numbers;
            srand(static_cast<unsigned int>(time(0))); 
            for (int i = 0; i < 10000; ++i) 
                numbers.push_back(rand());
        
            Span sp(10000);
            sp.addNumbers(numbers.begin(), numbers.end());
            std::cout << "s --> " << sp.shortestSpan() << std::endl;
            std::cout << "l --> " << sp.longestSpan() << std::endl;
        }
    }
    catch (std::runtime_error & e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}