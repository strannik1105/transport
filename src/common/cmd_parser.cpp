#include <cstdlib>
#include <vector>

#include "common/cmd_parser.h"


CMDParseResult::CMDParseResult(enum ParseStatus status, std::vector<int>* tr_types)
{
    this->status = status;
    this->tr_types = tr_types;
}

CMDParseResult::~CMDParseResult()
{
    free(this->tr_types);
}

enum ParseStatus CMDParseResult::get_status()
{
    return this->status;
}

std::vector<int>* CMDParseResult::get_types()
{
    return this->tr_types;
}

CMDParseResult* CMDParser::parse(const int argc, const char *argv[])
{
    std::vector<int>* types = new std::vector<int>();

    if(argc < 2)
    {
        return new CMDParseResult(CMD_TOO_FEW_ARGS, types);
    }
    
    for(int i = 1; i < argc; ++i)
    {
        int item = strtol(argv[i], NULL, 10);
        types->push_back(item);
    }

    return new CMDParseResult(CMD_SUCCESS, types);
}