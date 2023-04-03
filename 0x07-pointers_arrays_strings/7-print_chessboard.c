#include "main.h"
/**
 *print_chessboard - to print the chessboard
 *@a: The variable that collectsthe variable to be printed
 *
 *
 *
 *
 *
 */
void print_chessboard(char (*a)[8])
{
	int iIndex, jIndex;

	for (iIndex = 0; a[iIndex][7]; iIndex++)
	{
		for (jIndex = 0; jIndex < 8; jIndex++)
			_putchar(a[iIndex][jIndex]);

		_putchar('\n');

	}
}
