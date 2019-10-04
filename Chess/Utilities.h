#pragma once
#include <iostream>
using namespace std;

class Utilities
{
public:
	Utilities();
	~Utilities();

	static bool ConvertPos(string Pos, unsigned int* row, unsigned int* col)
	{
		const char *pChar = Pos.data();

		*col = pChar[0] - 'A';
		*row = '8' - pChar[1];
		return false;
	}

	static bool ConvertPos(string& Pos, unsigned int row, unsigned int col)
	{
		//char c = 'A' + col;
		Pos = ('A'+col);
		Pos += ('8'-row);
		
		return false;
	}
};



Utilities::Utilities()
{
}


Utilities::~Utilities()
{
}
