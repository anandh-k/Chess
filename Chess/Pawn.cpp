#include <iostream>

#include "Pawn.h"
#include "typedefs.h"

using namespace std;

Pawn::Pawn()
{
	this->mType = (int)enPawn;//later change to just pawn
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

void Pawn::DisplayCoin()
{
	cout << " P ";
}