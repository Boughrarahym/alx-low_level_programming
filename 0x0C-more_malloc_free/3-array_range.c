#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * from min to max
 * Boughrara
 * @min: the minimum value to include in the array
 * @max: the maximum value to include in the array
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int b = 0, h;

	if (min > max)
	{
		return (NULL);
	}
	b = max - min + 1;
	arr = malloc(sizeof(int) * b);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < b; h++)
	{
		arr[h] = min + h;
	}
	return (arr);
}
