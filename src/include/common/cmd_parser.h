#ifndef CMD_PARSER_H
#define CMD_PARSER_H

#include <vector>


enum ParseStatus
{
    CMD_SUCCESS,
    CMD_TOO_FEW_ARGS
};

class CMDParseResult
{
    private:
        enum ParseStatus status;
        std::vector<int>* tr_types;
    public:
        CMDParseResult(enum ParseStatus status, std::vector<int>* tr_types);
        ~CMDParseResult();
        // enum ParseStatus get_status();
        std::vector<int>* get_types();
};


class CMDParser
{
    public:
        CMDParseResult* parse(const int argc, const char *argv[]);
};

#endif