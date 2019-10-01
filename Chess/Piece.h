#pragma once

#include <string>

using namespace std;

class Piece
{
	
public:
	
protected:
	int mColor;
	int mType;
	virtual bool boIsMoveValid(unsigned int SrcRow, char SrcCol, unsigned int DstRow, char DstCol) = 0;
	

public:
	bool boMove(string Src, string Dst);
	int GetType();
	virtual void DisplayCoin() = 0;
private:
	void vCoordinateHelper(string Coordinate, unsigned int& Row, char& Column);
};




