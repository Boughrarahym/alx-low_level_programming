#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function that count the number of words in a string
 * @s: string
 * Return: number of words
 */

int count_word(char *s)
{
	int flg, cn, hym;

	flg = 0;
	hym = 0;

	for (cn = 0; s[cn] != '\0'; cn++)
	{
		if (s[cn] == ' ')
			flg = 0;
		else if (flg == 0)
		{
			flg = 1;
			hym++;
		}
	}

	return (hym);
}

/**
 * **strtow - function that splits a string into words
 * @str: string
 * Return: pointer to an array
 * or NULL
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, b = 0, l = 0, hym, cn = 0, start, end;

	while (*(str + l))
		l++;
	hym = count_word(str);
	if (hym == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (hym + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (cn)
		{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (cn + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
				*tmp++ = str[start++];
				*tmp = '\0';
				matrix[b] = tmp - cn;
				b++;
				cn = 0;
		}
		}
		else if (cn++ == 0)
			start = i;
	}

	matrix[b] = NULL;

	return (matrix);
}
