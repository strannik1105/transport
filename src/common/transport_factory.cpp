#include "common/transport_factory.h"
#include "transport/transport.h"


Transport::ITransport* 
Transport::TransportFactory::get_transport_by_type(int type)
{
    if(this->transport_samples.find(type) == transport_samples.end())
    {
        return nullptr;
    }
    
    return static_cast<ITransport*>(this->transport_samples[type]);
}