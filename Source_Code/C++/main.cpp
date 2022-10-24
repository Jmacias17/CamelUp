#include <iostream>
using namespace std;
#include "Action.h"
#include "Camel.h"
#include "Game"
#include <cstring>
#include <ctype.h>
#include <string>

int main() {
  char c;
  int turn, round;
  cout << " Welcome to Camel Up!\n A game where camel racing betting is "
          "encouraged!\n\n";
  Game newGame;

  do {
    round = newGame.getRound();
    Message::displayRound(round);
	newGame.displayBoard();
    Action::removeTicket(0);
    cout << "\n";

    turn = 1;
    while (turn <= 5) {
      c = newGame.getAction();
	  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      switch (c) {
      case 'A':
        cout << "Action under development\n";
        continue;
      case 'B':
        cout << "Action under development\n";
        continue;
      case 'C':
        Action::removeTicket(turn);
        newGame.setToken();
        break;
      case 'D':
        cout << "Action under development\n";
        continue;
      default:
        cout << "Error Occured \n";
      }
		if (turn !=5) 
			newGame.displayBoard();
      	turn++;
    }
    round++;
    newGame.setRound(round);
    newGame.resetRound();
  } while (newGame.checkWinner());
  return 0;
}
