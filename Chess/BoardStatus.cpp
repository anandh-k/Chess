#include "BoardStatus.h"

#include <iostream>

BoardStatus::BoardStatus()
{
	memset(mPieceInfo, Empty_Place, sizeof(mPieceInfo));
	
	mPieceInfo[0][0] = Black_Rook; //0 0
	mPieceInfo[0][1] = Black_Knight; //0 1
	mPieceInfo[0][2] = Black_Bishop;
	mPieceInfo[0][3] = Black_King;
	mPieceInfo[0][4] = Black_Queen;
	mPieceInfo[0][5] = Black_Bishop;
	mPieceInfo[0][6] = Black_Knight;
	mPieceInfo[0][7] = Black_Rook;

	for (int i = 0; i < 8; i++)
	{
		mPieceInfo[1][i] = Black_Pawn;
	}

	//mPieceInfo[1][0] = Black_Pawn; //1 0
}

BoardStatus::~BoardStatus()
{
}

int BoardStatus::GetPieceAt(char Row, int Col)
{
	int Piece = Empty_Place;
	bool boValidOp = this->boIsValidPos(Row, Col);

	if (boValidOp)
	{
		int row, col;
		this->ConvertPos(Row, Col, row, col);
		Piece = this->mPieceInfo[row][col];
	}
	
	return Piece;
}


bool BoardStatus::SetPieceAt(int Piece, char Row, int Col)
{
	bool boValid = (this->boIsValidPos(Row, Col)) && (Piece < InvalidPiece);
	
	if (boValid)
	{
		int row, col;
		this->ConvertPos(Row, Col, row, col);
		this->mPieceInfo[row][col] = (unsigned char) Piece;
	}

	return boValid;
}


bool BoardStatus::boIsValidPos(char Row, int Col)
{
	// TODO: Add your implementation code here.
	return ((Row >= 'A') && (Row <= 'H')
		&& (Col >= 1) && (Col <= 8));
}


void BoardStatus::ConvertPos(char Row, int Col, int& row, int& col)
{
	row = Row - 'A', col = Col - 1;
}
