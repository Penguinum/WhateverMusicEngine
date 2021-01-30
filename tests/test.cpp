#include "Engine.h"
#include <memory>
#include <gtest/gtest.h>
#include <cmath>
#include <iostream>

using std::abs;

class EngineTest : public ::testing::Test {
protected:
    virtual void SetUp() {
        engine = new Engine(44100);
        engine->setBaseNote(440 * std::pow(2, -3/12)); // 1st octave's C note
        engine->tuneEqually(12);
    }

    virtual void TearDown() {
        delete engine;
    }

    Engine *engine;
};

TEST_F(EngineTest, test1) {
    ASSERT_LT(abs(engine->getNoteFrequency(-1, 3) - 110), 0.00000001);
    ASSERT_LT(abs(engine->getNoteFrequency(1, 3) - 440), 0.00000001);
    ASSERT_LT(abs(engine->getNoteFrequency(2, 3) - 880), 0.00000001);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
