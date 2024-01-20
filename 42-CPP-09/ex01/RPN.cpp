#include "RPN.hpp"

RPN::RPN() {}
RPN::~RPN() {}
RPN::RPN(const RPN & rpn) { *this = rpn; }
RPN & RPN::operator=(const RPN & rpn)
{
    if (this != &rpn)
        this->stack = rpn.stack;
    return *this;
}
void RPN::evaluate(std::string & str)
{    
    for (int i = 0; i < (int)str.size(); i++)
        if ((i % 2 != 0 && str[i] != ' ') || str.back() == ' ')
            throw std::runtime_error(BAD_CHAR);

    if (str.empty() || str.size() <= 2 || isdigit(str.back()))
        throw std::runtime_error(BAD_ARGS);

    for (int i = 0; i < (int)str.size(); i++)
    {
        if (str.at(i) == ' ')
            continue;
        else if (isdigit(str[i]))
        {
            int val = str.at(i) - '0';
            if (val < 0 || val > 9)
                throw std::runtime_error(BAD_CHAR);
            this->stack.push(val);
        }
        else if (str.at(i) == '+' || str.at(i) == '-' || str.at(i) == '*' || str.at(i) == '/')
        {
            if (this->stack.size() < 2)
                throw std::runtime_error(BAD_SIZE);
            int a = this->stack.top();
            this->stack.pop();
            int b = this->stack.top();
            this->stack.pop();
            if (str.at(i) == '+')
                this->stack.push(b + a);
            else if (str.at(i) == '-')
                this->stack.push(b - a);
            else if (str.at(i) == '*')
                this->stack.push(b * a);
            else if (str.at(i) == '/')
            {
                if (a == 0)
                    throw std::runtime_error(BAD_CHAR);
                this->stack.push(b / a);
            }
        }
        else
            throw std::runtime_error(BAD_CHAR);
    }
        std::cout << stack.top() << std::endl;
}
