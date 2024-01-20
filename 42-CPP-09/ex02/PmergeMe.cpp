#include "PmergeMe.hpp"
#include <cstddef>
#include <stdexcept>

void raiseRuntimeError(std::string const &msg){
    throw std::runtime_error(msg);
}

void checkargs(std::string const & arg)
{
    for (int i = 0; i < (int)arg.size(); i++)
        if (isdigit(arg.at(i)) == false)
            raiseRuntimeError("\n\033[3;31musage: ./PmergeMe 10 27 15 ...\n");
}

void parseNumbers(int ac, char **av)
{
    if (ac < 2)
        raiseRuntimeError("\n\033[3;31musage: ./PmergeMe x y z ...\n");
    for (int i = 1; i < ac ; i++)
        checkargs(av[i]);
}

int   jacobshalInc(size_t numbers)
{
    if(numbers <= 1)
        return (numbers);
    return jacobshalInc(numbers - 1) + (2 * jacobshalInc(numbers - 2));
}

void filljacobshallVect(std::vector<int> & vec, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        size_t inc = jacobshalInc(i);
        if (inc >= size)
            break;
        vec.push_back(inc);
    }
}

void filljacobshalldeque(std::deque<int> & vec, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        size_t inc = jacobshalInc(i);
        if (inc >= size)
            break;
        vec.push_back(inc);
    }
}