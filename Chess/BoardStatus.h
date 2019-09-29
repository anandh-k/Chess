#pragma once

#include "typedefs.h"

class BoardStatus
{
public:
	BoardStatus();
	~BoardStatus();
protected:
	unsigned char mPieceInfo[8][8];
public:
	int GetPieceAt(char Row, int Col);
	bool SetPieceAt(int Piece, char Row, int Col);
private:
	bool boIsValidPos(char Row, int Col);
	void ConvertPos(char Row, int Col, int& row, int& col);
};

