#ifndef GAME_H
#define GAME_H
#include <iostream>
using namespace std;
#include "Camel.h"
#include "Message.h"
#include "Tile.h"
#include <cstring>
#include <ctype.h>
#include <map>
#include <string>

// This Game class includes the logic to control the aspects of the CamelUp
// game.
class Game {
  // Functions are static to only allow execution to all instances of object
  // Game. In other words there is only ONE Game.
private:
  // Camel Pieces.
  const int camelCount = 7;
  int round;
  Camel camels[7];
  Tile board[16];
  int winnerNum;

public:
  Game() { this->start(); }
  void start();
  void displayBoard();
  void displayUnit(int tileIn);
  char getAction();
  void setToken();

  void resetRound() {
	  Camel* currCamel;
	  for (int i = 0; i < this->camelCount; i++) {
		  currCamel = this->getCamel(i);
		  currCamel->setIsMoved(false);
	  }
  }
  int getWinnerNum() const { return this->winnerNum; }

  void setWinnerNum(int winnerNumIn) { this->winnerNum = winnerNumIn; }

  bool checkWinner() { return (this->getWinnerNum() == -1); }

  // Get the Camel in location of Camel Num in the Hash Map camels
  Camel *getCamel(int camelNum) { return &camels[camelNum]; }

  void setCamels() {
    for (int i = 0; i < this->camelCount; i++) {
      Camel newCamel(i);
      this->camels[i] = newCamel;
    }
  }

  void setRound(int roundIn) { this->round = roundIn; }

  void setBoard() {
    for (int i = 0; i < 16; i++) {
      Tile newTile(i);
      this->board[i] = newTile;
    }
  }

  int getRound() { return this->round; }

  Tile *getTile(int tileIn) { return &board[tileIn]; }

  int getTopCamel(int tileIn) {
    Tile *currTile = this->getTile(tileIn);
    int bottomCamelNum = currTile->getCamelNum();
    Camel *topCamel = this->getCamel(bottomCamelNum);
    int parent = bottomCamelNum;

    while (topCamel->getParent() != -1) {
      parent = topCamel->getParent();
      topCamel = this->getCamel(parent);
    }
    return parent;
  }
};

#endif