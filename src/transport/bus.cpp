#include "transport/bus.h"
#include "transport/car.h"


using namespace Transport;


std::string Bus::get_name()
{
    return "автобус";
}

int Bus::get_whels_count()
{
    return 6;
}

std::string Bus::get_info()
{
    std::string info = Car::get_info();
    return info;
}