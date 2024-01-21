#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include "vectorSort.hpp"
#include "dequeSort.hpp"
#include <cstddef>
#include <stdexcept>
#include <sys/time.h>
#include <iomanip>


void raiseRuntimeError(std::string const &msg);
void filljacobshallVect(std::vector<int> & vec, size_t size);
void filljacobshalldeque(std::deque<int> & deq, size_t size);
void checkargs(std::string const & arg);
void parseNumbers(int ac, char **av);
void combineJacobsIndexes(int size, std::vector<int>& insertComb);
void runPmergeMe(int ac, char **av);