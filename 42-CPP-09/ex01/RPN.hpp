#pragma once
#include <iostream>
#include "MACS.hpp"
#include <stack>

class RPN
{
public:
    RPN();
    ~RPN();
    RPN(const RPN & rpn);
    RPN & operator=(const RPN & rpn);
    void evaluate(std::string & str);
private:
    std::stack<int> stack;
};