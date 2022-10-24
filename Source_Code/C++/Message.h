#include <iostream>
using namespace std;
#include <cstring>
#include <ctype.h>
#include <string>

class Message {
public:
  static void displayActions() {
    cout << "------------------------------------------------------------------"
            "----\n";
    cout << "|A. Take top betting card                                         "
            "   |\n";
    cout << "|B. Place spectator tile on track                                 "
            "   |\n";
    cout << "|C. Take 1 pyramid ticket and throw dice                          "
            "   |\n";
    cout << "|D. Bet on overall winner or loser                                "
            "   |\n";
    cout << "------------------------------------------------------------------"
            "----\n";
  }

  static void displayStartline() {
    cout << "------------------------------------------------------------------"
            "----\n";
    cout << "|\t\t\t\t\t\t\t\tSTART                                |\n";
    cout << "------------------------------------------------------------------"
            "----\n";
  }

  static void displayRound(int roundIn) {
    cout << "------------------------------------------------------------------"
            "----\n";
    cout << "|\t\t\t\t\t\t\t\tRound " << roundIn
         << "                             |\n";
    cout << "------------------------------------------------------------------"
            "----\n";
  }

  static void displayFinishline() {
    cout << "------------------------------------------------------------------"
            "----\n";
    cout << "|\t\t\t\t\t\t\t\tFINISH                               |\n";
    cout << "------------------------------------------------------------------"
            "----\n";
  }
};
