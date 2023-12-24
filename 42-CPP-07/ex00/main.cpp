#include <iostream>
#include "whatever.hpp"
// class Awesome
// {
//   public:
//     Awesome(void) : _n(0) {}
//     Awesome( int n ) : _n( n ) {}
//     Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
//     bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
//     bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
//     bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
//     bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
//     bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
//     bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
//     int get_n() const { return _n; }
//   private:
//     int _n;
// };
// std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

// int main(void)
// {
// 	Awesome a(2), b(4);

//         swap(a, b);
//         std::cout << a << " " << b << std::endl;
//         std::cout << max(a, b) << std::endl;
//         std::cout << min(a, b) << std::endl;
//         return (0);
// }

int main()
{
    int a = 97;
    int b = 98;

    // using templates with int
    std::cout << std::endl << "----- int -----" << std::endl;
    std::cout << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "max: " << static_cast<char>(::max(a, b) - 32) << std::endl;
    std::cout << "min: " << static_cast<char>(::min(a, b) - 32) << std::endl;

    std::cout << std::endl;
    std::cout << "--- swap ---" << std::endl;
    std::cout << std::endl;
    swap(a, b);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "max: " << static_cast<char>(::max(a, b) - 32) << std::endl;
    std::cout << "min: " << static_cast<char>(::min(a, b) - 32) << std::endl;

    // using templates with double
    std::cout << std::endl << "----- double -----" << std::endl;
    std::cout << std::endl;
    std::cout << "[49.7 aka 1] vs [48.2 aka 0] -> max: " << static_cast<char>(max(49.7, 48.2)) << std::endl;
    std::cout << "[49.7 aka 1] vs [48.2 aka 0] -> min: " << static_cast<char>(min(49.7, 48.2)) << std::endl;

    // using templates with string
    std::cout << std::endl << "----- string -----" << std::endl;
    std::cout << std::endl;
    const std::string s1 = "Hisoka";
    const std::string s2 = "Chrollo";
    std::cout << "[ASCII WARS] Hisoka vs Chrollo -> winner: " << ::max(s1, s2) << std::endl;
}
