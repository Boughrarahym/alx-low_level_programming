#include "main.h"

/**
 * factorial - function that returns the factorial of a number
 * @n: the number
 * Return: the factorial of the number or -1 if n is negative
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
