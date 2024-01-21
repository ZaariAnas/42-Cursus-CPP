#include "BitcoinExchange.hpp"
#include <cstdlib>
#include <fstream>

int checkArg(int ac)
{
    if (ac != 2)
    {
        std::cout 	<< "\n\033[3;31merror : unvalid input"
                    << "\nusage : ./btc <file> \"value\"\n"
                    << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

int main(int ac, char **av)
{

    if (checkArg(ac))
        return EXIT_FAILURE;
    std::fstream file("data.csv");
    std::fstream input(av[1]);
    try
    {
        if (file.fail() || input.fail())
            throw std::runtime_error("\n\033[3;31merror: failed to open file\n");
    
        BitcoinExchange btc(file, input);
    }
    catch(const std::exception& e)
    {
        file.close();
        input.close();
        std::cerr << e.what() << '\n';
        std::cout << "main catch" << std::endl;
    }
}