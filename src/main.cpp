#include <iostream>
#include <memory>

#include "common/cmd_parser.h"
#include "common/transport_factory.h"


using namespace Transport;


int main(const int argc, const char *argv[])
{
  auto cmd_parser = std::make_unique<CMDParser>();
  auto factory = std::make_unique<TransportFactory>();
  auto results = std::shared_ptr<CMDParseResult>(cmd_parser->parse(argc, argv));

  if(results->get_status() != CMD_SUCCESS)
  {
    std::cout << "Слишком мало аргументов передано" << std::endl;
  }

  auto types = results->get_types();

  for(auto i = types->begin(); i < types->end(); i++)
  {
    std::cout << factory->get_transport_by_type(*i)->get_info() << std::endl << std::endl;
  } 

  return 0;
}