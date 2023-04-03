#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a:  array of chars
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int hym, bgrr;

	for (hym = 0; hym < 8; hym++)
	{
		for (bgrr = 0; bgrr < 8; bgrr++)
	{
		if (bgrr == 7)
	_putchar(a[hym][bgrr]);
		else
	{
			_putchar(a[hym][bgrr]);
			_putchar(' ');
	}
	}
	_putchar('\n');
	}
}
