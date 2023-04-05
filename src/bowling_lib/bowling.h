#pragma once

namespace Bowling
{
  class Frame
  {
    public:
      Frame();
    public:
      void record_ball(int num_pins);
      int total_score() const;
    private:
      int current_score;
  };

  class Game
  {
    public:
      bool is_complete() const;
      int get_score() const;
      void record_ball(int num_pins);
  };
}
