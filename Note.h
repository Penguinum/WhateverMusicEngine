#ifndef _NOTE_H_
#define _NOTE_H_

#include <cstdint>

enum EVENT_TYPE {
    EVT_NOTE,
    EVT_PAUSE,
};

struct Note {
    EVENT_TYPE eventType;
    uint8_t note;
    uint8_t octave;
    uint8_t volume;
    uint8_t lengthDenom;
    bool isDotNote;
    uint8_t tupletLengthDenom;
    int8_t panning;
    uint8_t effectCode;
    uint8_t effectValue;
};

#endif
