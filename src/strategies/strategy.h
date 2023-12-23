#ifndef STRATEGY_H 
#define STRATEGY_H

class Strategy
{
public:
  // Constructor
  Strategy() {}

  // Virtual destructor
  virtual ~Strategy() {}

  // Virtual function to make a decision in the game
  virtual bool makeDecision() const = 0;
};

#endif // STRATEGY_H
