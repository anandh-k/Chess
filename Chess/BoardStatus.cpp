#include "BoardStatus.h"
#include <iostream>
#include "Rook.h"
#include "Pawn.h"

#include "Utilities.h"

BoardStatus::BoardStatus()
{
	int row, col;
	memset(mPiece, NULL, sizeof(Piece*) * 8 * 8);

	row = 0, col = 0;
	mPiece[row][col] = new Rook();//Black_Rook; //0 0
	row = 0, col = 7;
	mPiece[row][col] = new Rook();
	
	row = 1;
	for (col= 0; col < 8; col++)
	{
		mPiece[row][col] = new Pawn();
	}	
}

BoardStatus::~BoardStatus()
{
}

Piece* BoardStatus::GetCharAt(char Row, int Col)
{
	Piece* pPiece = NULL;
	bool boValidOp = this->boIsValidPos(Row, Col);

	if (boValidOp)
	{
		int row, col;
		this->ConvertPos(Row, Col, row, col);
		pPiece = this->mPiece[row][col];
	}

	return pPiece;
}

Piece* BoardStatus::GetCharAt(unsigned int row, unsigned int col)
{
	Piece* pPiece = NULL;
	//bool boValidOp = this->boIsValidPos(Row, Col);

	if (1)
	{
		pPiece = this->mPiece[row][col];
	}

	return pPiece;
}

bool BoardStatus::SetCharAt(Piece* pPiece, char Row, int Col)
{
	bool boValid = this->boIsValidPos(Row, Col);

	if (boValid)
	{
		int row, col;
		this->ConvertPos(Row, Col, row, col);
		this->mPiece[col][row] = pPiece;
	}

	return boValid;
}

bool BoardStatus::SetCharAt(Piece* pPiece, unsigned int row, unsigned int col)
{
	//bool boValid = this->boIsValidPos(Row, Col);

	if (1)
	{
		this->mPiece[row][col] = pPiece;
	}

	return 1;
}

bool BoardStatus::Move(std::string Src, std::string Dst)
{
	unsigned int row, col;
	Piece* pPiece = NULL;
	bool boValid = false;
	const char* ptr = Src.data();

	char srcRow, dstRow;
	int srcCol, dstCol;

	srcRow = ptr[0];
	srcCol = ptr[1] - '0';

	ptr = Dst.data();

	dstRow = ptr[0];
	dstCol = ptr[1] - '0';

	//pPiece = this->GetCharAt(srcRow, srcCol);
	{//inp a, out 1
		row = 8 - srcCol;
		col = (srcRow - 'A');
		pPiece = this->GetCharAt(row, col);
	}

	if (pPiece)
	{
		if (pPiece->boMove(Src, Dst)) //valid?
			this->SetCharAt(pPiece, dstRow, dstCol);
	}


	return false;
}

Piece* BoardStatus::GetPieceAt(std::string Pos)
{
	unsigned int row, col;
	Piece* Piece = 0;

	Utilities::ConvertPos(Pos, &row, &col);
	
	
	return Piece;
}


bool BoardStatus::SetPieceAt(Piece *pPiece, std::string)
{
	bool boValid = false;
	
	

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
