#pragma once

namespace Bowling
{
  class Game
  {
    public:
      bool is_complete() const;
      int get_score() const;
      void record_ball(int num_pins);
  };
}
