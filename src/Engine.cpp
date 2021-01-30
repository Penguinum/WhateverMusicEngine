#include "Engine.h"
#include "OutputModule.h"
#include "Module.h"
#include <cmath>
#include <cassert>

Engine::Engine(int sampleRate) {
    this->sampleRate = sampleRate;
    this->modules.resize(1);
}

void Engine::setBaseNote(double base) {
    this->baseTone = base;
}

void Engine::tuneEqually(uint semitones) {
    tonesPerOctave = semitones;
    tonesRelation.resize(semitones);
    for (uint i = 0; i < semitones; i++) {
        tonesRelation[i] = std::pow(2, (double)i/semitones);
    }
}

double Engine::getNoteFrequency(int octave, uint8_t note) {
    // assert(note < tonesPerOctave);
    return baseTone * std::pow(2, (octave - 1) + note/tonesPerOctave);
}

void Engine::tick() {
    for (const auto& track: tracks) {
        // TODO
    }
    currentSample++;
}

void Engine::audioCallback(std::vector<std::vector<double>> &bufferToFill) {
}
