#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * using malloc
 * Hym boughrara
 * @b: Size of memory to allocate
 * Return: apointer to the allocated memory
 *         if malloc fails the function terminates with a status of 98
 */

void *malloc_checked(unsigned int b)
{
	void *h;

	h = malloc(b);
	if (h == NULL)
	{
		exit(98);
	}
	return (h);
}
