#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocate memory block
 * using malloc and free
 * @ptr: pointer to the memory
 * @old_size: old size
 * @new_size: new size
 * Hym boughrara
 * Return: Pointer to the new memory block
 * or NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	old_ptr = ptr;
	for (i = 0; i < old_size && i < new_size; i++)
	{
		new_ptr[i] = old_ptr[i];
	}

	free(ptr);
	return (new_ptr);
}
