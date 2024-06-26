#include <string>

#include "transport/car.h"


using namespace Transport;


Car::Car(int max_speed)
{
    this->max_speed = max_speed;
}

std::string Car::get_name()
{
    return "автомобиль";
}

int Car::get_max_speed()
{
    return this->max_speed;
}

int Car::get_whels_count()
{
    return 4;
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