#include "dequeSort.hpp"
#include "PmergeMe.hpp"
#include <cstddef>
#include <sstream>
#include <deque>

dequeSort::dequeSort(int ac, char **av)
{
    parseNumbers(ac, av);

    for (int i = 1; i < ac; i++)
    {
        unsigned int num = atoi(av[i]);
        if (num > std::numeric_limits<unsigned int>::max())
            raiseRuntimeError("\n\033[3;31merror: given number is too large\n");
        this->deq.push_back(num);
    }
    this->oddLast = -1;
    if (deq.size() % 2 != 0)
    {
        this->oddLast = deq.back();
        deq.pop_back();
    }
    this->s_deq = deq;
}

dequeSort::dequeSort(dequeSort const & src)
{
    *this = src;
}

dequeSort & dequeSort::operator=(dequeSort const & src)
{
    if (this != &src)
    {
        this->deq = src.deq;
        this->oddLast = src.oddLast;
    }
    return *this;
}

dequeSort::~dequeSort(){}

void dequeSort::printDeq()
{
    std::cout << "s_deq: ";
    for (int i = 0; i < (int)this->s_deq.size(); i++)
        std::cout << "["<< this->s_deq[i] << "] ";
    std::cout << std::endl;
    std::cout << "deq: ";
    for (int i = 0; i < (int)this->deq.size(); i++)
        std::cout << "["<< this->deq[i] << "] ";
    std::cout << std::endl;
}

void dequeSort::mergePairs(std::deque<std::pair<int, int> >& pairs, std::deque<std::pair<int, int> >& left, std::deque<std::pair<int, int> >& right)
{
    for (size_t i = 0; i < pairs.size(); i++)
    {
        if (left.empty())
        {
            pairs[i] = right[0];
            right.erase(right.begin());
        }
        else if (right.empty())
        {
            pairs[i] = left[0];
            left.erase(left.begin());
        }
        else if (left[0].first < right[0].first)
        {
            pairs[i] = left[0];
            left.erase(left.begin());
        }
        else
        {
            pairs[i] = right[0];
            right.erase(right.begin());
        }
    }
}

void dequeSort::mergeSortPairs(std::deque<std::pair<int, int> >& pairs)
{
    if (pairs.size() == 1)
        return;
    std::deque<std::pair<int, int> > left;
    std::deque<std::pair<int, int> > right;
    int pos = pairs.size() / 2;
    left.insert(left.begin(), pairs.begin(), pairs.begin() + pos);
    right.insert(right.begin(), pairs.begin() + pos, pairs.end());
    mergeSortPairs(left);
    mergeSortPairs(right);
    mergePairs(pairs, left, right);
}

void dequeSort::generateSortedPairs(std::deque<int>& deqt)
{
    std::deque<std::pair<int, int> > pairs;
    for (size_t i = 0; i < deq.size(); i += 2)
    {
        int first = deq[i] > deq[i + 1] ? deq[i] : deq[i + 1];
        int second = deq[i] > deq[i + 1] ? deq[i + 1] : deq[i];
        pairs.push_back(std::make_pair(first, second));
    }
    mergeSortPairs(pairs);
    deq.clear();
    for (size_t i = 0; i < pairs.size(); i++)
    {
        deqt.push_back(pairs[i].second);
        deq.push_back(pairs[i].first);
    }
    deq.push_front(deqt.front());
    deqt.pop_front();
}

void combineJacobsIndexes(int size, std::deque<int>& insertComb)
{
    std::deque<int> jacobs;
    std::deque<int> indexes;
    size_t inc = 0;
    int val;

    filljacobshalldeque(jacobs, size);
    for (int i = 0; i < size; i++)
        indexes.push_back(i);
    for (size_t i = 0; i < jacobs.size(); i++)
    {
        val = jacobs.at(i);
        if (insertComb.size() != 0 && val == insertComb.back())
            continue;
        insertComb.push_back(val);
        indexes[val] = -1;
        for (; inc < indexes.size() && indexes[inc] < val; inc++)
        {
            if (indexes[inc] == -1)
                continue;
            insertComb.push_back(indexes[inc]);
        }
    }
    if (inc < indexes.size())
        insertComb.insert(insertComb.end(), indexes.begin() + inc, indexes.end());
}

void dequeSort::binaryInsertion(int val)
{
    int low = 0;
    int high = deq.size() - 1;
    int mid;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(deq.at(mid) < val)
            low = mid + 1;
        else
            high = mid - 1; 
    }
    deq.insert(deq.begin() + low , val);
}

void dequeSort::Ford_Johnson_dequeSort()
{
    std::deque<int> pending;
    std::deque<int> insertComb;

    if (deq.size() < 2)
        return;
    generateSortedPairs(pending);
    combineJacobsIndexes(pending.size(), insertComb);
    for (size_t i = 0; i < insertComb.size(); i++)
        binaryInsertion(pending[insertComb[i]]);
    if (this->oddLast != -1)
        binaryInsertion(this->oddLast);
}

int  dequeSort::getdeqSize()
{
    return this->deq.size();
}