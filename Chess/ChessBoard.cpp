#include "ChessBoard.h"

#include <iostream>
#include <Windows.h>

using namespace std;

ChessBoard::ChessBoard()
{
	this->pCurrStatus = NULL;
}

void ChessBoard::InsertDepInjection(BoardStatus* pDepObject)
{
	this->pCurrStatus = pDepObject;
}

ChessBoard::~ChessBoard()
{
	this->pCurrStatus = NULL;
}

void ChessBoard::vDisplayBoard(void)
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);	

	int count = 0;
	for (int i = 8; i > 0; i--)
	{
		SetConsoleTextAttribute(console, 15); //Black background
		cout << "\t ";

		SetConsoleTextAttribute(console, 15); //White background black text
		cout << i;

		SetConsoleTextAttribute(console, 240); //White background black text
		cout << "  ";//Border

		for (int j = 1; j < 9; j++)
		{

			if (count == 0)
			{
				SetConsoleTextAttribute(console, 16);
				count = 1;
			}
			else
			{
				SetConsoleTextAttribute(console, 32);
				count = 0;
			}

			int currPiece = this->pCurrStatus->GetPieceAt( (i-1) + 'A', j);
			
			this->DisplayPiece((PieceEnum)currPiece);
		}

		if (count == 0) count = 1;
		else count = 0;

		SetConsoleTextAttribute(console, 240); //White background black text
		cout << "  " << endl;//Border
	}

	SetConsoleTextAttribute(console, 15); //Black background
	cout << "\t  ";

	SetConsoleTextAttribute(console, 240); //White background black text
	cout << "                            \n";

	SetConsoleTextAttribute(console, 15); //Black background
	cout << "\t";

	cout << "     A  B  C  D  E  F  G  H  \n";
	//cout << " ##A###B###C###D###E###F###G###H##\n";
	
}


void ChessBoard::DisplayPiece(PieceEnum PieceEnumVal)
{
	switch (PieceEnumVal)
	{
	case Empty_Place:
		cout << "   ";
		break;
	case Black_Pawn:
		cout << " P ";
		break;
	case Black_Rook:
		cout << " R ";
		break;
	case Black_Knight:
		cout << " N ";
		break;
	case Black_Bishop:
		cout << " B ";
		break;
	case Black_Queen:
		cout << " Q ";
		break;
	case Black_King:
		cout << " K ";
		break;
	default:
		break;
	}
	//cout << " A "; //Actual piece to be drawn
}
