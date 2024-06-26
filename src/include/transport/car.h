#ifndef CAR_H
#define CAR_H


#include <string>

#include "transport/transport.h"


namespace Transport
{
    class Car: public ITransport
    {
        public:
            int max_speed;

        protected:
            virtual std::string get_name();
            virtual int get_whels_count();
            virtual int get_max_speed();

        public:
            Car(int max_speed);
            ~Car() {};
            virtual std::string get_info();
    };
};

#endif