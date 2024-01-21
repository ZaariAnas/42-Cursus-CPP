#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    try 
    {
        runPmergeMe(ac, av);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}
