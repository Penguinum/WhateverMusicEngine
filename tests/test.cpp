#include "Engine.h"
#include <memory>
#include <gtest/gtest.h>

class EngineTest : public ::testing::Test {
protected:
    void setUp() {
        engine.reset(new Engine(44100));
    }

    std::unique_ptr<Engine> engine;
};

TEST(EngineTest, Init) {

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
