#include "Tit_for_tat.h"

bool TitForTat::makeDecision() const 
{
  // Always cooperate on the first move, then mirror the opponent's move thereafter
  return true;
}
