#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << BAD_ARGS << std::endl;
        return EXIT_FAILURE;
    }
    try
    {
        RPN rpn;
        std::string str(av[1]);
        rpn.evaluate(str);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}