#include <iostream>

#include "transport/transport.h"
#include "transport/car.h"
#include "transport/bus.h"


using namespace Transport;


int main(const int argc, const char *argv[])
{
  ITransport* bus = new Bus(150, 20);
  std::cout << bus->get_info() << std::endl;
  return 0;
}