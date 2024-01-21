#pragma once
#include <iostream>
#include <deque>
#include "PmergeMe.hpp"

class dequeSort
{
    private:
        std::deque<int> deq;
        std::deque<int> s_deq;
        int oddLast;
    public:
        dequeSort(int ac, char **av);
        dequeSort(dequeSort const & src);
        dequeSort & operator=(dequeSort const & src);
        ~dequeSort();
        void Ford_Johnson_dequeSort();
        void printDeq();
        void generateSortedPairs(std::deque<int>&);
        void mergeSortPairs(std::deque<std::pair<int, int> >&);
        void mergePairs(std::deque<std::pair<int, int> >&, std::deque<std::pair<int, int> >&, std::deque<std::pair<int, int> >&);
        void binaryInsertion(int val);
        int  getdeqSize();
};