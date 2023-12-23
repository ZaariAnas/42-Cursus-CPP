#include "Serializer.hpp"

int main()
{
    Data *data = new Data;
    data->car = "Rolls Royce";
    data->price = 7000000.0;
    uintptr_t raw = Serializer::serialize(data);
    Data *casted = Serializer::deserialize(raw);
    std::cout << casted->car << std::endl;
    std::cout << std::fixed << std::setprecision(2) << casted->price << "$"<< std::endl;
    std::cout 
    delete data;
    return 0;
}