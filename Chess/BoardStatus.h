#pragma once

#include "typedefs.h"
#include "Piece.h"
#include <iostream>

class BoardStatus
{
public:
	BoardStatus();
	~BoardStatus();
protected:
	Piece* mPiece[8][8];
	unsigned char mPieceInfo[8][8];
public:
	Piece* GetCharAt(char Row, int Col);
	Piece* GetCharAt(unsigned int row, unsigned int col);
	bool SetCharAt(Piece* Piece, char Row, int Col);
	bool SetCharAt(Piece* pPiece, unsigned int row, unsigned int col);
	bool Move(std::string Src, std::string Dst);


	/*int GetPieceAt(char Row, int Col);
	bool SetPieceAt(int Piece, char Row, int Col);*/
private:
	bool boIsValidPos(char Row, int Col);
	void ConvertPos(char Row, int Col, int& row, int& col);
};

