#include <iostream>

#include "transport/transport.h"
#include "transport/car.h"


using namespace Transport;


int main(const int argc, const char *argv[])
{
  ITransport* car = new Car(150);
  std::cout << car->get_info() << std::endl;
  return 0;
}