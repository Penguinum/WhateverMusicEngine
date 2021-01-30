#include "Engine.h"
#include "OutputModule.h"
#include "Module.h"

Engine::Engine(int sampleRate) {
    this->sampleRate = sampleRate;
    this->modules.resize(1);

}

void Engine::setTonesRelation(std::vector<double> &relation) {
    this->tonesRelation = relation;
    this->tonesPerOctave = relation.size();
}

void Engine::setBaseNote(double base) {
    this->baseTone = base;
}

void Engine::tick() {
    for (const auto& track: tracks) {
        auto note = track->tick();
        switch (note.eventType)
        {
        case EVT_NOTE:
            /* code */
            break;

        case EVT_PAUSE:
            /* code */
            break;

        default:
            break;
        }
    }
    currentSample++;
}

void Engine::audioCallback(std::vector<std::vector<double>> &bufferToFill) {
}
