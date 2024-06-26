#include <string>


namespace Transport
{
    class ITransport
    {
    public:
        ITransport() {};
        ~ITransport() {};
        virtual std::string get_info() = 0;
    }
}