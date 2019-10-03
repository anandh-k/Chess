#pragma once

#include "typedefs.h"
#include "BoardStatus.h"

class ChessBoard
{
public:
	void vDisplayBoard(void);
	void vDisplayBoard1(void);
	ChessBoard();
	~ChessBoard();
	void InsertDepInjection(BoardStatus* pDepObject);
	
protected:	
	void DisplayPiece(PieceEnum PieceEnumVal);
	void DisplayPiece(Piece* Piece);
	
private:
	BoardStatus* pCurrStatus;
};

