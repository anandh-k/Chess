#include "BoardStatus.h"
#include <iostream>
#include "Rook.h"
#include "Pawn.h"

#include "Utilities.h"

BoardStatus::BoardStatus()
{
	memset(mPiece, NULL, sizeof(Piece*) * 8 * 8);

	mPiece[0][0] = new Rook();//Black_Rook; //0 0
	mPiece[0][1] = new Rook();
	//mPiece[0][1] = Black_Knight; //0 1
	/*mPiece[0][2] = Black_Bishop;
	mPiece[0][3] = Black_King;
	mPiece[0][4] = Black_Queen;
	mPiece[0][5] = Black_Bishop;
	mPiece[0][6] = Black_Knight;*/
	//mPiece[0][7] = new Rook();
#if 0
	for (int i = 0; i < 8; i++)
	{
		mPiece[1][i] = new Pawn();
	}


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
#endif
	//mPieceInfo[1][0] = Black_Pawn; //1 0
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
		pPiece = this->mPiece[col][row];
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

bool BoardStatus::Move(std::string Src, std::string Dst)
{
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

	pPiece = this->GetCharAt(srcRow, srcCol);

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
