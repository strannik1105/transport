#include "common/transport_factory.h"
#include "transport/transport.h"


Transport::ITransport* 
Transport::TransportFactory::get_transport_by_type(int type)
{
    return static_cast<ITransport*>(this->transport_samples[type]);
}