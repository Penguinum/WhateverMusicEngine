#ifndef _INSTRUMENT_H_
#define _INSTRUMENT_H_
#include <vector>
#include <memory>

using std::vector;
using std::shared_ptr;
using std::unique_ptr;

class Instrument {
public:
    Instrument();
    void tick(size_t channel, double &left, double &right);

private:
    // vector<unique_ptr<Generator>> generators;
};

#endif
