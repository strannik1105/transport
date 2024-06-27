#ifndef TRANSPORT_FACTORY_H
#define TRANSPORT_FACTORY_H

#include <map>

#include "transport/bike.h"
#include "transport/bus.h"
#include "transport/car.h"
#include "transport/scooter.h"
#include "transport/transport.h"



namespace Transport
{
    class TransportFactory
    {
        private:
            std::map<int, ITransport*> transport_samples
            {
                {0, new Scooter()}, 
                {1, new Bike(200)},
                {2, new Car(180)},
                {3, new Bus(150, 20)}
            };       
        
        public:
            ITransport* get_transport_by_type(int type);
    };
};


#endif