#include "prisoners_dilemma_game.h"
#include <iostream>

PrisonersDilemmaGame::PrisonersDilemmaGame(Strategy* player1, Strategy* player2)
  : player1_(player1), player2_(player2) {}

PrisonersDilemmaGame::~PrisonersDilemmaGame() 
{
  // Clean up allocated memory if needed
  delete player1_;
  delete player2_;
}

void PrisonersDilemmaGame::playGame(int rounds) 
{
  for (int i = 0; i < rounds; ++i) {
    bool decision1 = player1_->makeDecision();
    bool decision2 = player2_->makeDecision();

    // Update scores or perform any other game-related logic here

    // For simplicity, just print the decisions for now
    std::cout << "Round " << (i + 1) << ": Player 1 decides " << decision1
              << ", Player 2 decides " << decision2 << std::endl;
    }
}
