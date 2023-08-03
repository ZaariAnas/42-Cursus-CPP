#include <iostream>

int main()
{
	std::string n = "hhhh";
	const std::string &m = "hjkjk";
	(std::string &)m = "hjfhhf" + n;
	std::cout << m << " " << sizeof(m)<< std::endl;
}
