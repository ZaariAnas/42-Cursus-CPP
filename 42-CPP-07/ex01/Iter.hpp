#pragma once
#include <iostream>

template <typename T, typename F> void iter(T *array, size_t length, void (*function)(F &))
{
    if (!array || !function)
        return;
    for (size_t i = 0; i < length; i++)
        (function)(array[i]);
}