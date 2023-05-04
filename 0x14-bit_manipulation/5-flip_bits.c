#include "main.h"

/**
 * flip_bits - function that counts the number of bits needed to be
 * flipped to get from one number to another
 * @n: The first number
 * @m: The number to flip n to
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, b = 0;

	while (xor > 0)
	{
		b += (xor & 1);
		xor >>= 1;
	}

	return (b);
}
