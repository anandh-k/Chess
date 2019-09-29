#pragma once

#include "typedefs.h"
#include "BoardStatus.h"

class ChessBoard
{
public:
	void vDisplayBoard(void);
	ChessBoard();
	~ChessBoard();
	void InsertDepInjection(BoardStatus* pDepObject);
protected:	
	void DisplayPiece(PieceEnum PieceEnumVal);
private:
	BoardStatus* pCurrStatus;
};

