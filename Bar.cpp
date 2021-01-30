#include "Bar.h"

Bar::Bar(uint8_t signatureTop, uint8_t signatureBottom) {
    this->signatureTop = signatureTop;
    this->signatureBottom = signatureBottom;
    voices.reset(new std::vector<Voice>);
    voices->resize(1);
}

void Bar::setSignature(uint8_t top, uint8_t bottom) {
    signatureTop = top;
    signatureBottom = bottom;
}
