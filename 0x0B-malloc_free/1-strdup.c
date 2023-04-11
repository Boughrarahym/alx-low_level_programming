#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 * Return: pointer to the duplicated string, or NULL if str is NULL or if
 *         insufficient memory was available
 */

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int h, bgrr;

	if (str == NULL)
		return (NULL);

	for (bgrr = 0; str[bgrr] != '\0'; bgrr++)
		;

	dup_str = malloc(sizeof(char) * (bgrr + 1));

	if (dup_str == NULL)
		return (NULL);

	for (h = 0; h <= bgrr; h++)
		dup_str[h] = str[h];

	return (dup_str);
}
