#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the unsigned long integer
 * @index: the index of the bit
 *
 * Return: If an error occurs -1
 * Otherwise the value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
