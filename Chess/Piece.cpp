#include "Piece.h"

bool Piece::boMove(string Src, string Dst)
{
	unsigned int SrcRow, DstRow;
	char SrcCol, DstCol;
	// TODO: Use try-catch exception for invalid coordinates
	this->boCoordinateHelper(Src, SrcRow, SrcCol);
	this->boCoordinateHelper(Dst, DstRow, DstCol);
	return false;
}

bool Piece::boCoordinateHelper(string Coordinate, unsigned int& Row, char& Column)
{
	const char *pChar = Coordinate.data();
	Column = pChar[0];
	Row = pChar[1] - '0';
	// TODO: Use try-catch exception for invalid coordinates
	return false;
}
