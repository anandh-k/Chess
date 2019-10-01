#pragma once
#include "Piece.h"
class Pawn :
	public Piece
{
public:
	Pawn();
	~Pawn();
	bool boIsMoveValid(unsigned int SrcRow, char SrcCol, unsigned int DstRow, char DstCol);
	void DisplayCoin();
};

