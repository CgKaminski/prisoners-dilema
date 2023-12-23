#ifndef PRISONERS_DILEMMA_GAME_H
#define PRISONERS_DILEMMA_GAME_H

#include "Strategy.h"

class PrisonersDilemmaGame 
{
public:
  // Constructor
  PrisonersDilemmaGame(Strategy* player1, Strategy* player2);

  // Destructor
  ~PrisonersDilemmaGame();

  // Play the game for a specified number of rounds
  void playGame(int rounds);

private:
  Strategy* player1_;
  Strategy* player2_;
};

#endif // PRISONERS_DILEMMA_GAME_H
