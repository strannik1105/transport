#include <iostream>

#include "transport/transport.h"
#include "transport/car.h"
#include "transport/bus.h"


using namespace Transport;


int main(const int argc, const char *argv[])
{
  ITransport* scooter = new Scooter();
  ITransport* bike = new Bike(150);
  ITransport* car = new Car(150);
  ITransport* bus = new Bus(150, 20);
  std::cout << scooter->get_info() << std::endl << std::endl << bike->get_info() << std::endl << std::endl << car->get_info() << std::endl << std::endl << bus->get_info() << std::endl;
  return 0;
}