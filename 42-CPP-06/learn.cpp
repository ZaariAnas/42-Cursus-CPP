





// ------------------------------- EX01 : reinterpret_cast ------------------------------- //

#include <iostream>
int main() {
    char buffer[] = "Hello123";
    std::cout << "Characters: " << buffer << std::endl;
    int* intPtr = reinterpret_cast<int*>(buffer);
    std::cout << "expected [1819043144] / output [" << *intPtr << "]" << std::endl;
    // value of H is 72, e is 101, l is 108 (in ASCII)
    // meaning H is --> 01001000
    // meaning e is --> 01100101
    // meaning l is --> 01101100
    // meaning l is --> 01101100
    // our binary number is 01101100 01101100 01100101 01001000
}


// ------------------------------- EX02 : dynamic_cast ------------------------------- //