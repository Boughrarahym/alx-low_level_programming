#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number
 * otherwise return 0
 * @n: number to check
 * Return: 1 if n is prime
 * 0 otherwise
 */

int is_prime_number(int n)
{
	return (prime_sup(n, 2));
}

/**
 * prime_sup - recursive sup function for is_prime_number
 * @n: the number to check
 * @h: divisor to check
 * Return: 1 if n is prime, 0 otherwise
 */

int prime_sup(int n, int h)
{
	if (n <= 1)
		return (0);
	else if (h == n)
		return (1);
	else if (n % h == 0)
		return (0);
	else
		return (prime_sup(n, h + 1));
}
