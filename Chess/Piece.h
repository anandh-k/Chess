#pragma once

#include <string>

using namespace std;

class Piece
{
	int mColor;
public:
	
protected:
	virtual bool boIsMoveValid(unsigned int SrcRow, char SrcCol, unsigned int DstRow, char DstCol) = 0;

public:
	bool boMove(string Src, string Dst);
private:
	void vCoordinateHelper(string Coordinate, unsigned int& Row, char& Column);
};




