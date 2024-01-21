#pragma once
#include <iostream>
#include <vector>
#include "PmergeMe.hpp"

class vectorSort
{
    private:
        std::vector<int> vec;
        std::vector<int> s_vec;
        int oddLast;
    public:
        vectorSort(int ac, char **av);
        vectorSort(vectorSort const & src);
        vectorSort & operator=(vectorSort const & src);
        ~vectorSort();
        void Ford_Johnson_vectorSort();
        void printVec();
        void generateSortedPairs(std::vector<int>&);
        void mergeSortPairs(std::vector<std::pair<int, int> >&);
        void mergePairs(std::vector<std::pair<int, int> >&, std::vector<std::pair<int, int> >&, std::vector<std::pair<int, int> >&);
        void binaryInsertion(int val);
        int  getvecSize();
};