#include <string>

#include "transport/car.h"


using namespace Transport;


Car::Car(int max_speed)
{
    this->name = "автомобиль";
    this->wheels_count = 4;
    this->max_speed = max_speed;
}

std::string Car::get_name()
{
    return this->name;
}

int Car::get_max_speed()
{
    return this->max_speed;
}

int Car::get_whels_count()
{
    return this->wheels_count;
}

std::string Car::get_info()
{
    return (
        "Название: "
         + this->get_name()
         + "\nКоличество колёс: "
         + std::to_string(this->get_whels_count())
         + "\nМаксимальная скорость: "
         + std::to_string(this->get_max_speed())
        );

}