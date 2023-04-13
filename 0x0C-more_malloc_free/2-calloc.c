#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _fill - fills memory with a constant byte
 * Hym Boughrara
 * @s: pointer
 * @b: byte
 * @n: number of times
 * Return: address of the memory where the byte was written
 */

char *_fill(char *s, char b, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
	s[h] = b;
	}
		return (s);
}

/**
 * _calloc - function that allocates memory for an array using malloc
 * Hym Boughrara
 * @nmemb: the amount of spaces that needs to be allocated
 * @size: size of each of the allocated spaces
 * Return: a pointer to the allocated array
 * or NULL if the process fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	arr = _fill(arr, 0, nmemb * size);
	return (arr);
}
