#include "main.h"

/**
 * swap_int - function that swaps integer value
 *
 * @a: function parameter
 * @b: function parameter
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
