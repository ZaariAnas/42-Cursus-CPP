#pragma once
#include <iostream>
#include <iomanip>
#include "Data.hpp"

class Serializer
{
    private:
        Serializer();
        Serializer(Serializer& copy);
        Serializer& operator=(Serializer& other);
        ~Serializer();
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};