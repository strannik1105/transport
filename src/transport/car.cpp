#include <string>

#include "transport/car.h"


using namespace Transport;


std::string Car::get_name()
{
    return "автомобиль";
}

int Car::get_whels_count()
{
    return 4;
}

std::string Car::get_info()
{
    return Bike::get_info();
}