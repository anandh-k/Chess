#include "Rook.h"



Rook::Rook()
{
}


Rook::~Rook()
{
}

bool Rook::boIsMoveValid(unsigned int SrcRow, char SrcCol, unsigned int DstRow, char DstCol)
{
	bool boValidMove = false;

	if ((SrcRow == DstRow) || (SrcCol == DstCol))
		boValidMove = true;

	return boValidMove;
}