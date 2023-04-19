#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array
 * @size: the size
 * @cmp: pointer to a funtion that will compare the element
 * Return: the index of the first element
 * or -1 if no element matches or if size is less than or equal to 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int h;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (h = 0; h < size; h++)
		{
			cmp(array[h]);
			if (cmp(array[h]) != 0)
			{
				return (h);
			}
		}
		if (cmp(array[h]) == 0)
			return (-1);
	}
	else
		return (-1);
	return (h);
}
