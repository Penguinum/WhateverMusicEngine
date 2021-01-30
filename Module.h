#ifndef _MODULE_H_
#define _MODULE_H_

#include <vector>
#include <cstdint>

class Module {
public:
    Module();

private:
    bool tickHandled;
    std::vector<uint16_t> inputs;
    std::vector<uint16_t> outputs;
};

#endif
