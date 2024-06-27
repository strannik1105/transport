#include "transport/scooter.h"


using namespace Transport;


std::string Scooter::get_name()
{
    return "самокат";
}

int Scooter::get_whels_count()
{
    return 2;
}

std::string Scooter::get_info()
{
    return (
        "Название: "
         + this->get_name()
         + "\nКоличество колёс: "
         + std::to_string(this->get_whels_count())
        );
}