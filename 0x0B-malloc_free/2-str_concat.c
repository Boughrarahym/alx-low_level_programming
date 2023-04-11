#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: pointer to the concatenated string, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int s1_bgrr = 0, s2_bgrr = 0, h, b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_bgrr] != '\0')
		s1_bgrr++;

	while (s2[s2_bgrr] != '\0')
		s2_bgrr++;

	concat = malloc((s1_bgrr + s2_bgrr + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (h = 0; h < s1_bgrr; h++)
		concat[b++] = s1[h];

	for (h = 0; h < s2_bgrr; h++)
		concat[b++] = s2[h];

	concat[b] = '\0';

	return (concat);
}
