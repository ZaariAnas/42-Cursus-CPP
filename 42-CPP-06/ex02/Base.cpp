#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}
Base* generate(void) {
    try
    {
        std::srand(std::time(0));
        int random = rand() % 3;
        if (random == 0)
            return new A;
        else if (random == 1)
            return new B;
        else
            return new C;
    }
    catch (std::bad_alloc &e) {
        std::cout << e.what() << std::endl;
        return NULL;
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch (std::bad_cast &e)
    {
        try
        {
            B& b = dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
            (void)b;
        }
        catch (std::bad_cast &e)
        {
            C& c = dynamic_cast<C&>(p);
            std::cout << "C" << std::endl;
            (void)c;
        }
    }
}