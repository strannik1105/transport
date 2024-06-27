#include <iostream>

#include "common/transport_factory.h"


using namespace Transport;


int main(const int argc, const char *argv[])
{
  TransportFactory* factory = new TransportFactory();
  std::cout << factory->get_transport_by_type(0)->get_info() << std::endl;
  return 0;
}