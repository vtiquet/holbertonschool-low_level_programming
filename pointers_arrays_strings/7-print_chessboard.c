#include "main.h"
/**
* print_chessboard -  a function that prints the chessboard.
* @a: the string.
*/
void print_chessboard(char (*a)[8])
{
	int i1 = 0, i2;

	while (a[i1][7])
	{
		for (i2 = 0; i2 < 8; i2++)
			_putchar(a[i1][i2]);

		_putchar('\n');
		i1++;
	}
}
