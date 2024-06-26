#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <string>


namespace Transport
{
    class ITransport
    {
    public:
        ITransport() {}
        ~ITransport() {};
        virtual std::string get_info() = 0;
    };
};

#endif