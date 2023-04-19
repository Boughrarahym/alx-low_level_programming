#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 * @array: the array that will be used
 * @size: size of the array
 * @action: the fuction that will be used on each element of @array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int h;

	if (action != NULL && array != NULL)
		for (h = 0; h < size; h++)
			action(array[h]);
}
