#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

void print_number(int n)
	{
	unsigned int h;

	if (n < 0)
	{
		_putchar('-');
	n *= -1;
	}

	h = n;

	if (h / 10)
	{
		print_number(h / 10);
	}

		_putchar(h % 10 + '0');
	}
