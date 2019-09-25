#pragma once
#include "Piece.h"
class Rook :
	public Piece
{
public:
	Rook();
	~Rook();
	bool boIsMoveValid(unsigned int SrcRow, char SrcCol, unsigned int DstRow, char DstCol);
};

