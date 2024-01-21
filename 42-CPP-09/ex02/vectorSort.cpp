#include "vectorSort.hpp"
#include "PmergeMe.hpp"
#include <cstddef>
#include <sstream>
#include <vector>

vectorSort::vectorSort(int ac, char **av)
{
    parseNumbers(ac, av);

    for (int i = 1; i < ac; i++)
    {
        unsigned int num = atoi(av[i]);
        if (num > std::numeric_limits<unsigned int>::max())
            raiseRuntimeError("\n\033[3;31merror: given number is too large\n");
        this->vec.push_back(num);
    }
    this->oddLast = -1;
    if (vec.size() % 2 != 0)
    {
        this->oddLast = vec.back();
        vec.pop_back();
    }
    this->s_vec = vec;
}

vectorSort::vectorSort(vectorSort const & src)
{
    *this = src;
}

vectorSort & vectorSort::operator=(vectorSort const & src)
{
    if (this != &src)
    {
        this->vec = src.vec;
        this->oddLast = src.oddLast;
    }
    return *this;
}

vectorSort::~vectorSort(){}

void vectorSort::printVec()
{
    std::cout << "s_vec: ";
    for (int i = 0; i < (int)this->s_vec.size(); i++)
        std::cout << "["<< this->s_vec[i] << "] ";
    std::cout << std::endl;
    std::cout << "vec: ";
    for (int i = 0; i < (int)this->vec.size(); i++)
        std::cout << "["<< this->vec[i] << "] ";
    std::cout << std::endl;
}

void vectorSort::mergePairs(std::vector<std::pair<int, int> >& pairs, std::vector<std::pair<int, int> >& left, std::vector<std::pair<int, int> >& right)
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

void vectorSort::mergeSortPairs(std::vector<std::pair<int, int> >& pairs)
{
    if (pairs.size() == 1)
        return;
    std::vector<std::pair<int, int> > left;
    std::vector<std::pair<int, int> > right;
    int pos = pairs.size() / 2;
    left.insert(left.begin(), pairs.begin(), pairs.begin() + pos);
    right.insert(right.begin(), pairs.begin() + pos, pairs.end());
    mergeSortPairs(left);
    mergeSortPairs(right);
    mergePairs(pairs, left, right);
}

void vectorSort::generateSortedPairs(std::vector<int>& vect)
{
    std::vector<std::pair<int, int> > pairs;
    for (size_t i = 0; i < vec.size(); i += 2)
    {
        int first = vec[i] < vec[i + 1] ? vec[i + 1] : vec[i];
        int second = vec[i] < vec[i + 1] ? vec[i] : vec[i + 1];
        pairs.push_back(std::make_pair(first, second));
    }
    mergeSortPairs(pairs);
    vec.clear();
    for (size_t i = 0; i < pairs.size(); i++)
    {
        vect.push_back(pairs[i].second);
        vec.push_back(pairs[i].first);
    }
    binaryInsertion(vect.at(0));
    vect.erase(vect.begin());

}

void combineJacobsIndexes(int size, std::vector<int>& insertComb)
{
    std::vector<int> jacobs;
    std::vector<int> indexes;
    size_t inc = 0;
    int val;

    filljacobshallVect(jacobs, size);
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

void vectorSort::binaryInsertion(int val)
{
    int low = 0;
    int high = vec.size() - 1;
    int mid;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(vec.at(mid) < val)
            low = mid + 1;
        else
            high = mid - 1; 
    }
    vec.insert(vec.begin() + low , val);
}

void vectorSort::Ford_Johnson_vectorSort()
{
    std::vector<int> pending;
    std::vector<int> insertComb;

    if (vec.size() < 2)
        return;
    generateSortedPairs(pending);
    combineJacobsIndexes(pending.size(), insertComb);
    for (size_t i = 0; i < insertComb.size(); i++)
        binaryInsertion(pending[insertComb[i]]);
    if (this->oddLast != -1)
        binaryInsertion(this->oddLast);
}

int  vectorSort::getvecSize()
{
    return this->vec.size();
}