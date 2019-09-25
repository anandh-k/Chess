#include <iostream>
#include "Pawn.h"
#include "Rook.h"

using namespace std;

int main(void)
{
	Rook P;
	bool boVal;

	boVal = P.boMove("A1", "A8");	
	boVal = P.boMove("E5", "H5");
	boVal = P.boMove("A1", "B2");
	

	cout << "Hello world\n";
	return 1;
}