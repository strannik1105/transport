#ifndef SCOOTER_H
#define SCOOTER_H

#include "transport/transport.h"


namespace Transport
{
    class Scooter: public ITransport
    {
        protected:
            virtual std::string get_name();
            virtual int get_whels_count();

        public:
            Scooter() {};
            ~Scooter() {};
            virtual std::string get_info();
    };
};

#endif