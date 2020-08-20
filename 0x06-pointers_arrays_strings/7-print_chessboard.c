#include "holberton.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; a[x][7]; x++)
	{
		for (y = 0; y < 8; y++)
			_putchar(a[x][y]);

		_putchar('\n');
	}
}
