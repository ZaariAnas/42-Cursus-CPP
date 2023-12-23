#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    Base* ptr = generate();
    identify(ptr);
    Base& ref = *ptr;
    identify(ref);
    delete ptr;
}
