#include "Piece.h"

//bool Piece::boIsMoveValid(unsigned int SrcRow, char SrcCol, unsigned int DstRow, char DstCol)
//{
//	return false;
//}

int Piece::GetType()
{
	return this->mType;
}

bool Piece::boMove(string Src, string Dst)
{
	bool boMoveSuccess = true;

	unsigned int SrcRow, DstRow;
	char SrcCol, DstCol;

	try
	{
		this->vCoordinateHelper(Src, SrcRow, SrcCol);
		this->vCoordinateHelper(Dst, DstRow, DstCol);

		boMoveSuccess = this->boIsMoveValid(SrcRow, SrcCol, DstRow, DstCol);
	}
	catch (...)
	{
		//Illegal operation
		boMoveSuccess = false;
	}

	return boMoveSuccess;
}

void Piece::vCoordinateHelper(string Coordinate, unsigned int& Row, char& Column)
{
	if (Coordinate.empty())
		throw 0;

	const char *pChar = Coordinate.data();
	Column = pChar[0];
	Row = pChar[1] - '0';

	if ((Row < 1) || (Row > 8))
		throw 0;

	if ((Column < 'A') || (Column > 'H'))
		throw 0;
	// TODO: How does nested throw-catch work?	
}
