#include "bowling.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE ("The game is complete")
{
  Bowling::Game g;
  REQUIRE(g.is_complete() == true);
}
#if 0
TEST_CASE ("The game is not complete")
{
  REQUIRE();
}

TEST_CASE ("STRIKE scoring is calculated correct")
{
  REQUIRE();
}

TEST_CASE ("SPARE scoring is calculate correct")
{
  REQUIRE();
}
#endif

