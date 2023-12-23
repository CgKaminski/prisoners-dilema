#ifndef TIT_FOR_TAT_H
#define TIT_FOR_TAT_H

#include "strategy.h"

class TitForTat : public Strategy
{
public:
  // Constructor
  TitForTat() {}

  // Destructor
  ~TitForTat() {}

  // Implementation of the makeDecision function
  bool makeDecision() const override;
};

#endif // TIT_FOR_TAT_H
