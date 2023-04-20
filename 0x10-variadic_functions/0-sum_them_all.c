#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters passed to the function
 * Hym
 * Return: If n == 0, return 0
 * otherwise sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list h;
	unsigned int i, sum = 0;

	va_start(h, n);

	for (i = 0; i < n; i++)
		sum += va_arg(h, int);

	va_end(h);

	return (sum);
}
