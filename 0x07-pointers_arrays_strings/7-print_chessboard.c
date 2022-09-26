#include "main.h"

/**
* print_chessboard - prints the chessboard
* @a: characters for the board
* Return: void
*/

void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
	}
}
