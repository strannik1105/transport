#ifndef CAR_H
#define CAR_H


#include <string>

#include "transport/bike.h"


namespace Transport
{
    class Car: public Bike
    {
        protected:
            virtual std::string get_name() override;
            virtual int get_whels_count() override;

        public:
            Car(int max_speed): Bike(max_speed) {};
            ~Car() {};
            virtual std::string get_info();
    };
};

#endif