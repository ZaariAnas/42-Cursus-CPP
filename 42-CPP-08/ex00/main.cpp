#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    try
    {
        std::cout << std::endl;
        std::cout << "{3} in vector     --> " << easyfind(vec, 3) << std::endl;
        std::cout << "{-1} in vector    --> " << easyfind(vec, -1) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "error: no occurence found" << std::endl;
    }
    std::cout << std::endl;
    return 0;
}