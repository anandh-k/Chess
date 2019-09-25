#include "Pawn.h"



Pawn::Pawn()
{
}


Pawn::~Pawn()
{
}

bool Pawn::boIsMoveValid(unsigned int SrcRow, char SrcCol, unsigned int DstRow, char DstCol)
{
	bool boValidMove = false;
	//TODO: direction and perspective changes for black/white pawns

	if ((SrcRow == (DstRow-1)) && (SrcCol == DstCol))
		boValidMove = true;
	return boValidMove;
}