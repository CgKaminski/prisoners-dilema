#ifndef ALL_C_H
#define ALL_C_H

#include "strategy.h"

class AllC: public Strategy
{
public:
  // Constructor
  AllC() {}

  // Destructor
  ~AllC() {}

  // Implementation of the makeDecision function
  bool makeDecision() const override;
};

#endif // ALL_C_H
