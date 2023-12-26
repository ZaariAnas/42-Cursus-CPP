#pragma once
#include <cstddef>
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

class Span
{
private:
    unsigned int N;
    std::vector<int> v;
public:
    Span(unsigned int N);
    Span(const Span &copy);
    Span &operator=(const Span &copy);
    ~Span();
    void addNumber(int n);
    int shortestSpan() const;
    int longestSpan() const;
};