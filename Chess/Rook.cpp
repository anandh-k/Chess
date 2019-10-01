#include <iostream>
#include "Rook.h"
#include "typedefs.h"

using namespace std;

Rook::Rook()
{
	this->mType = (int)enRook;//later change to just rook
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

void Rook::DisplayCoin()
{
	cout << " R ";
}