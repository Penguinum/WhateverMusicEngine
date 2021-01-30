#ifndef _ENGINE_H_
#define _ENGINE_H_

#include <vector>
#include <cstdint>
#include <memory>
#include "Module.h"
#include "Track.h"

using std::vector;
using std::shared_ptr;
using std::unique_ptr;

class Engine {
public:
    Engine(int sampleRate);
    void audioCallback(std::vector<std::vector<double>>&);
    void setBaseNote(double base);
    void tuneEqually(uint semitones);
    double getNoteFrequency(int octave, uint8_t note);
    void tick(); // TODO: not void

private:
    vector<shared_ptr<Module>> modules;
    vector<shared_ptr<Track>> tracks;
    uint8_t tonesPerOctave;
    vector<double> tonesRelation;
    double baseTone;
    double sampleRate;
    double bpm;

    size_t currentSample;
};

#endif
