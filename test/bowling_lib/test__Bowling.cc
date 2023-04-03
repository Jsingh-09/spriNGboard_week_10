#include "bowling.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE ("The game is complete")
{
  Bowling::Game g;
  REQUIRE(g.is_complete() == true);
}
TEST_CASE ("The current player scorce at the end of the game  is less than 300")
{
  Bowling::Game g;
  REQUIRE(g.get_score() <= 300);
}
#if 0
TEST_CASE ("STRIKE scoring is calculated correct")
{
  REQUIRE();
}

TEST_CASE ("SPARE scoring is calculate correct")
{
  REQUIRE();
}
#endif

