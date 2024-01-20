#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <deque>


void raiseRuntimeError(std::string const &msg);
void filljacobshallVect(std::vector<int> & vec, size_t size);
void filljacobshalldeque(std::deque<int> & deq, size_t size);
void checkargs(std::string const & arg);
void parseNumbers(int ac, char **av);
void combineJacobsIndexes(int size, std::vector<int>& insertComb);