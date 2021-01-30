#ifndef _TRACK_H_
#define _TRACK_H_
#include <memory>
#include <vector>
#include <cstdint>
#include "Bar.h"
#include "Instrument.h"

using std::vector;
using std::unique_ptr;
using std::shared_ptr;

class Track {
public:
    Track();
    Note tick();

private:
    vector<shared_ptr<Bar>> bars;
    shared_ptr<Instrument> instrument;
};

#endif
