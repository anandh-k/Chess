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
	B.vDisplayBoard();
	
	
	
	

	
	return 1;
}