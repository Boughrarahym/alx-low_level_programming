#include "main.h"

/**
  *print_chessboard - function that prints the chessboard
  *@a: pointer
  *
  *Return: void.
  */
void print_chessboard(char (*a)[8])
{
	int  hym, bgrr;

	for (hym = 0; hym <= 7; hym++)
	{
		for (bgrr = 0; bgrr <= 7; bgrr++)
		{
			_putchar(a[hym][bgrr]);
		}
		_putchar(10);
	}
}
