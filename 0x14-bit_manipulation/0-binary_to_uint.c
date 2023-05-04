#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0
 * Otherwise - the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int con_num = 0, mult = 1;
	int h;

	if (b == NULL)
		return (0);

	for (h = 0; b[h];)
		h++;

	for (h -= 1; h >= 0; h--)
	{
		if (b[h] != '0' && b[h] != '1')
			return (0);

		con_num += (b[h] - '0') * mult;
		mult *= 2;
	}

	return (con_num);
}
