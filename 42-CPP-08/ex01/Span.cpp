#include "Span.hpp"
#include <stdexcept>
#include <vector>

Span::Span(unsigned int N) : N(N){}
Span::Span(const Span &copy){ *this = copy;}
Span &Span::operator=(const Span &copy)
{
    if (this != &copy)
    {
        this->N = copy.N;
        this->v = copy.v;
    }
    return *this;
}
Span::~Span(){}

void Span::addNumber(int n)
{
    if (v.size() == N)
        throw std::runtime_error("error: insert in full container");
    v.push_back(n);
}

int Span::shortestSpan() const
{
    if (v.size() == 1 || v.empty())
        throw std::runtime_error("error: insufficient container size");
    std::vector<int> s_vec(v);
    std::sort(s_vec.begin(), s_vec.end());
    int span, shortest_span = std::numeric_limits<int>::max();
    for (unsigned long i = 1; i < s_vec.size(); i++)
    {
        span = s_vec[i] - s_vec[i - 1];
        if (span < shortest_span) shortest_span = span;
    }
    return shortest_span;
}

int Span::longestSpan() const
{
    if (v.size() == 1 || v.empty())
        throw std::runtime_error("error: insufficient container size");
    std::vector<int> s_vec(v);
    std::sort(s_vec.begin(), s_vec.end());
    return s_vec.back() - s_vec.front();
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (static_cast<unsigned int>(v.size() + end - begin) > N)
        throw std::runtime_error("error: insufficient container size");
    while (begin != end)
        addNumber(*begin++);
}
