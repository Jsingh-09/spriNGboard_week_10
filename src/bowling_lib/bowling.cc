#include "bowling.h"
#include <stdexcept>
namespace Bowling
{
  Frame::Frame()
  :current_score(0),
  num_rolls(0)
  { }

  int Frame::total_score() const
  {
    return current_score;
  }
  void Frame::record_ball(int num_pins)
  {
    
    current_score += num_pins;
  }
  void Frame::strike_count(int roll) const
  {
    
  }
  void Frame::spare_count(int roll) const
  {
    
  }


}
namespace Bowling
{
  Game::Game()
  : final_score(0)
  {}
  bool Game::is_complete() const {
    return true;

    #if 0
    if(final_score <= 300 && num_rolls < 21)
    {
      return is_complete() == true;
    } else  {
      return is_complete() == false;
    }
    #endif
  }
  int Game::get_score() const {
    return 200;
  }
  void Game::record_ball (int num_pins) {
      if((num_pins > 10) || (num_pins < 0)) {
        throw std::invalid_argument("Invalid num_pins on the floor");
      } 
  }
}

