#include "PmergeMe.hpp"
#include "vectorSort.hpp"
#include "dequeSort.hpp"
#include <cstddef>
#include <vector>

int main(int ac, char **av)
{
    try {
        {
            vectorSort vecSort(ac, av);
            vecSort.Ford_Johnson_vectorSort();
            vecSort.printVec();
        }
        {
            dequeSort deqSort(ac, av);
            deqSort.Ford_Johnson_dequeSort();
            deqSort.printDeq();
        }
        return 0;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return 1;
    }

}
