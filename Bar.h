#ifndef _BAR_H_
#define _BAR_H_

#include <memory>
#include <vector>
#include "Voice.h"

class Bar {
public:
    Bar(uint8_t signatureTop, uint8_t signatureBottom);
    void setSignature(uint8_t top, uint8_t bottom);

private:
    std::unique_ptr<std::vector<Voice>> voices;
    uint8_t signatureTop;
    uint8_t signatureBottom;
};

#endif
