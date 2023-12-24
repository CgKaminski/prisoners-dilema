#ifndef ALL_D_H
#define ALL_D_H

#include "strategy.h"

class AllD: public Strategy
{
public:
  // Constructor
  AllD() {}

  // Destructor
  ~AllD() {}

  // Implementation of the makeDecision function
  bool makeDecision() const override;
};

#endif // ALL_D_H
