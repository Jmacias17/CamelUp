#ifndef TILE_H
#define TILE_H

#include <iostream>
using namespace std;
#include <ctype.h>
#include <cstring>
#include <string>

class Tile
{
private:
	int tileNum;
	int camelNum;
	bool isOccupied;

public:
	// Default Constructor

	Tile()	{}

	Tile(int tileNumIn)	{
		setTileNum(tileNumIn);
		setCamelNum(-1);
		setIsOccupied(false);
	}

	int getTileNum() const
		{ return tileNum; }

	void setTileNum(int tileNumIn) 
		{ tileNum = tileNumIn; }

	int getCamelNum() const
  		{ return camelNum; }

	void setCamelNum(int camelNumIn) 
		{ camelNum = camelNumIn; }

	bool getIsOccupied() const
		{ return isOccupied; }

	void setIsOccupied(bool statement) 
		{ isOccupied = statement; }
};

#endif