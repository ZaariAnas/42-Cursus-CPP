#include "PmergeMe.hpp"


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

void runPmergeMe(int ac, char **av)
{
    try
    {
        {
            struct timeval start, end;
            double delta;


            gettimeofday(&start, NULL);

            vectorSort vecSort(ac, av);
            vecSort.Ford_Johnson_vectorSort();
            gettimeofday(&end, NULL);
            delta = ((end.tv_sec * 1e6) + end.tv_usec) - ((start.tv_sec * 1e6) + start.tv_usec);
            vecSort.printVec();
            std::cout   <<std::fixed << std::setprecision(5) <<"Time to process a range of "<< vecSort.getvecSize() 
                        <<" elements with std::vector : " << delta << " us"  << std::endl << std::endl;
        }
        {
            struct timeval start, end;
            double delta;


            gettimeofday(&start, NULL);

            dequeSort vecSort(ac, av);
            vecSort.Ford_Johnson_dequeSort();
            gettimeofday(&end, NULL);
            delta = ((end.tv_sec * 1e6) + end.tv_usec) - ((start.tv_sec * 1e6) + start.tv_usec);
            std::cout   <<std::fixed << std::setprecision(5) <<"Time to process a range of "<< vecSort.getdeqSize() 
                        <<" elements with std::deque : " << delta << " us"  << std::endl << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
