#include "ChessBoard.h"

#include <iostream>
#include <Windows.h>

using namespace std;

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

			cout << " A "; //Actual piece to be drawn
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
