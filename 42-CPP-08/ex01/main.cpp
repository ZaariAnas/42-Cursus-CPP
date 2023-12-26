#include "Span.hpp"
#include <exception>
#include <ostream>
#include <stdexcept>

int main()
{
    try 
    {
        Span numbers(0);
        srand(static_cast<unsigned int>(time(0))); 
        for (int i = 0; i < 10000; ++i) 
            numbers.addNumber(rand());
        std::cout << "s --> " << numbers.shortestSpan() << std::endl;
        std::cout << "l --> " << numbers.longestSpan() << std::endl;
    }
    catch (std::runtime_error & e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}