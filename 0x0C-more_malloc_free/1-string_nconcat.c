#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: Number of bytes
 * Hym boughrara
 * Return: Pointer to the concatenated string
 *         NULL if memory allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int h, b, len1, len2;
	char *result;

	if (s1 == NULL)
		s1 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	if (s2 == NULL)
		s2 = "";
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n >= len2)
		result = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
		return (NULL);
	for (h = 0; h < len1; h++)
		result[h] = s1[h];
	if (n >= len2)
	{
		for (b = 0; b < len2; h++, b++)
			result[h] = s2[b];
	}
	else
	{
		for (b = 0; b < n; h++, b++)
			result[h] = s2[b];
	}
	result[h] = '\0';
	return (result);
}
