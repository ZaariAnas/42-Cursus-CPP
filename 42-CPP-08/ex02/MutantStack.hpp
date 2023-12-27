#pragma once
#include <deque>
#include <iostream>
#include <stack>
#include <stdexcept>


template <typename T, class Container = std::deque<T> > class MutantStack : public std::stack<T, Container>
{
    public:
        typedef typename Container::iterator iterator;
        MutantStack(){}
        MutantStack(const MutantStack &copy) : std::stack<T, Container>(copy){}
        MutantStack &operator=(const MutantStack &copy)
        {
            if (this != &copy)
                std::stack<T, Container>::operator=(copy);
            return (*this);
        }
        ~MutantStack(){}
        iterator begin()
        {
            if (this->c.empty())
                throw std::runtime_error("error: stack is empty");
            return (std::stack<T, Container>::c.begin());
        }
        iterator end()
        {
            if (this->c.empty())
                throw std::runtime_error("error: stack is empty");
            return (std::stack<T, Container>::c.end());
        }
        void push(T value){
            std::stack<T, Container>::push(value);
        }
        void pop(){
            if (this->c.empty())
                throw std::runtime_error("error: stack is empty");
            std::stack<T, Container>::pop();
        }
        T top(){
            if (this->c.empty())
                throw std::runtime_error("error: stack is empty");
            return (std::stack<T, Container>::top());
        }
};