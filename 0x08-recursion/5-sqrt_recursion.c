#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: The natural square root of n
 * or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_sup(n, 1));
}

/**
 * sqrt_sup - Recursive helper function for _sqrt_recursion
 * @n: The number
 * @h: the square root
 * Return: The natural square root of n
 * or -1 if n does not have a natural square root
 */

int sqrt_sup(int n, int h)

{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (h * h == n)
		return (h);
	else if (h * h > n)
		return (-1);
	else
		return (sqrt_sup(n, h + 1));
}

