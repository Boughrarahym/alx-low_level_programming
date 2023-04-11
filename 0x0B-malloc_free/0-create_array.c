#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: the size of the array to create
 * @c: the char to initialize the array with
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int h;

	if (size == 0)
	return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	return (NULL);

	for (h = 0; h < size; h++)
	{
		array[h] = c;
	}

	return (array);
}
