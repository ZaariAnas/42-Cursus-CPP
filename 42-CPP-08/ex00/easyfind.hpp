#pragma once
#include <iostream>
#include <vector>
#include <array>

template <typename T> int easyfind(T & var, int num)
{
    typename T::iterator it = std::find(var.begin(), var.end(), num);
    if (it == var.end())
        throw std::exception();
    return std::distance(var.begin(), it);
}