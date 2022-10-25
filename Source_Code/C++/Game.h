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

  // Round Number
  int round;

  // Array of Camel Pieces
  Camel camels[7];

  // Array of Tiles on Board
  Tile board[16];

  // Number of Winning Camel Piece
  int winnerNum;

public:
  // Constructor for Game
  // When Intialized run the Start Function.
  Game() { this->start(); }

  /*  Display Functions */
  // This Function is used to print the correct order of the Unit Of Camels
  void printStack(int bottomCamelNum);

  // This Function is used to Display the Unit Of Camels from Bottom -> Top
  void displayUnit(int tile);

  // This Function is used to Display the Board
  void displayBoard();

  // This Function is used to Display the result of the Pyramid Action.
  void displayPyramidAction(Camel currCamel, int move);

  // This Function is used to Display the winner of the Game.
  void displayWinner(Camel currCamel);

  /* Setup Functions */
  // This Function is used to start the Game by running all methods for setup.
  void start();

  // This Function is used to set the Starting Spots of the Camels on the Board.
  void setStartingSpots();

  /* Game Action Functions */
  // This Function is used to get the Action of the user.
  char getAction();

  // This Function is used to set the new position of the camel based on pyramid
  // token.
  void setToken();

  // This Function is used to removed the links of the Camel from the Tile after
  // it moves.
  void removeCamelOnTile(int bottomCamelNum, int currPos);

  // This Function is used to set the links of Children and Parents of the Camel
  // Unit of CamelNum
  void setUnitLinks(int camelNum, int move);

  // This Function is used to Reset all values of Camel Pieces to Round
  // Defaults.
  void resetRound() {
    Camel *currCamel;
    for (int i = 0; i < this->camelCount; i++) {
      currCamel = this->getCamel(i);
      currCamel->setIsMoved(false);
    }
  }

  // This Function is used to set the Round Number.
  void setRound(int roundIn) { this->round = roundIn; }

  // This Function is used to get the Round Number.
  int getRound() { return this->round; }

  // This Function is used to get the Winning Camel Number
  int getWinnerNum() const { return this->winnerNum; }

  // This Function is used to set the Winner Camel Number
  void setWinnerNum(int winnerNumIn) { this->winnerNum = winnerNumIn; }

  // This Function is used to check if there is a Winner to Game.
  bool checkWinner() { return (this->getWinnerNum() == -1); }

  // This Functions is used to get the Camel in location of Camel Num from the
  // Array of Camel Pieces
  Camel *getCamel(int camelNum) { return &camels[camelNum]; }

  // This Function is used to set the Array of Camel Pieces.
  void setCamels() {
    for (int i = 0; i < this->camelCount; i++) {
      Camel newCamel(i);
      this->camels[i] = newCamel;
    }
  }

  // This Function is used to set the Board of the Game.
  void setBoard() {
    for (int i = 0; i < 16; i++) {
      Tile newTile(i);
      this->board[i] = newTile;
    }
  }

  // This Function is used to get the Tile of the Board based on tileIn Index.
  Tile *getTile(int tileIn) { return &board[tileIn]; }

  // This Function is used to get the Top Camel.
  int getTopCamel(int tileIn) {
    Tile *currTile = this->getTile(tileIn);
    int bottomCamelNum = currTile->getCamelNum();
    Camel *topCamel = this->getCamel(bottomCamelNum);
    // Since there is a possibility of BottomCamelNum not having a parent which
    // would make it the Top Camel, set parent to Bottom Camel Num
    int parent = bottomCamelNum;

    // Check to see if the current Top Camel has a camel above it.
    while (topCamel->getParent() != -1) {
      parent = topCamel->getParent();
      topCamel = this->getCamel(parent);
    }
    return parent;
  }
};

#endif