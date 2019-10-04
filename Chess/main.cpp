#include <iostream>
#include "Pawn.h"
#include "Rook.h"

#include "ChessBoard.h"

using namespace std;

int main(void)
{
	ChessBoard B;
	BoardStatus S;

	B.InsertDepInjection(&S);
	//B.vDisplayBoard();
	B.vDisplayBoard1();
	//
	////A2 to A3
	S.Move("A7", "A6");

	//B.vDisplayBoard();
	
	
	

	
	return 1;
}