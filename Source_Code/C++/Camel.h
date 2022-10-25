#ifndef CAMEL_H
#define CAMEL_H

#include <iostream>
using namespace std;
#include <cstring>
#include <ctype.h>
#include <string>

class Camel {
private:
  string type;
  string color;
  int position;
  int parent;
  int child;
  bool isMoved;

public:
  // Default Constructor
  Camel() {}

  Camel(int num) {
    // Sets to Default Values based on Number Given.
    switch (num) {
    case 0:
      setColor("Blue");
      setType("Regular");
      break;
    case 1:
      setColor("Yellow");
      setType("Regular");
      break;
    case 2:
      setColor("Green");
      setType("Regular");
      break;
    case 3:
      setColor("Orange");
      setType("Regular");
      break;
    case 4:
      setColor("Purple");
      setType("Regular");
      break;
    case 5:
      setColor("Black");
      setType("Crazy");
      break;
    case 6:
      setColor("White");
      setType("Crazy");
      break;
    }
    setIsMoved(false);
    setPosition(0);
    setParent(-1);
    setChild(-1);
  }

  string getType() const { return type; }

  void setType(string typeIn) { type = typeIn; }

  string getColor() const { return color; }

  void setColor(string colorIn) { color = colorIn; }

  int getPosition() const { return position; }

  void setPosition(int positionIn) { position = positionIn; }

  void addPosition(int move) { position = position + move; }

  int getParent() const { return parent; }

  void setParent(int parentIn) { parent = parentIn; }

  int getChild() const { return child; }

  void setChild(int childIn) { child = childIn; }

  bool getIsMoved() const { return isMoved; }

  void setIsMoved(bool statement) { isMoved = statement; }
};

#endif