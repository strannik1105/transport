#include "transport/bike.h"


using namespace Transport;


Bike::Bike(int max_speed)
{
    this->max_speed = max_speed;
}

std::string Bike::get_name()
{
    return "мотоцикл";
}

int Bike::get_max_speed()
{
    return this->max_speed;
}

std::string Bike::get_info()
{
    std::string info = Scooter::get_info();
    return (
        info
         + "\nМаксимальная скорость: "
         + std::to_string(this->get_max_speed())
        );

}