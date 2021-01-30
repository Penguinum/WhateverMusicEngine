#ifndef _VOICE_H_
#define _VOICE_H_

#include <memory>
#include <vector>
#include "Note.h"

class Voice {
public:
    Voice();
    void resize(size_t lines);
    size_t size();

private:
    std::unique_ptr<std::vector<Note>> events;
};

#endif
