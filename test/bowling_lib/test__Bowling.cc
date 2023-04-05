#include "bowling.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE ("The game is complete")
{
  Bowling::Game g;
  REQUIRE(g.is_complete() == true);
}
TEST_CASE ("The current player score at the end of the game is less than 300 maximum score")
{
  Bowling::Game g;
  REQUIRE(g.get_score() <= 300);
}

TEST_CASE ("The numbers of pins at the starting of the new game is exactly 10")
{
  Bowling::Game g; 
  REQUIRE_THROWS(g.record_ball(15));
  REQUIRE_THROWS(g.record_ball(-20));
  //REQUIRE_THROWS(g.record_ball(8));
}
#if 0
TEST_CASE ("Each frame game doesn't exceed 10 pins for two rolls")
{
  Bowling::Game g;
  g.current_roll_count(5)
  REQUIRE(g.score() );
}
#endif
TEST_CASE ("Score is being calculated correctly each frame")
{
  Bowling::Frame frame;   
  frame.record_ball(5);
  frame.record_ball(5);
  REQUIRE(frame.total_score() >=10);
}

TEST_CASE ("The start of the new game score is 0")
{
  Bowling::Frame frame;
  REQUIRE(frame.total_score() == 0);
}

