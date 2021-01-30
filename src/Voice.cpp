#include "Voice.h"
#include "Note.h"

Voice::Voice() {
    events.reset(new std::vector<Note>);
}

void Voice::resize(size_t lines) {
    events->resize(lines);
}

size_t Voice::size() {
    return events->size();
}
