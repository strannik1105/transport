#ifndef BUS_H
#define BUS_H


#include "transport/car.h"


namespace Transport
{
    class Bus: public Car
    {
    private:
        int passangers_count;
    
    protected:
        std::string get_name() override;
        int get_whels_count() override;

    public:
        Bus(int max_speed, int passangers_count): Car(max_speed)
        {
            this->passangers_count = passangers_count;
        }
        ~Bus() {};
        std::string get_info() override;
    
    };
};

#endif