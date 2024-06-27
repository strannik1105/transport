#ifndef BIKE_H
#define BIKE_H

#include "transport/scooter.h"


namespace Transport
{
    class Bike: public Scooter
    {
        private:
            int max_speed;

        protected:
            virtual std::string get_name() override;
            virtual int get_max_speed();

        public:
            Bike(int max_speed);
            ~Bike() {};
            virtual std::string get_info();
    };
};

#endif