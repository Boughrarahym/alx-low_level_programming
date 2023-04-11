#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates
 * all the arguments of a program
 * @ac: number
 * @av: array
 * Return:  a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int h, b, bgrr = 0, hym = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (h = 0; h < ac; h++)
	{
		for (b = 0; av[h][b]; b++)
			bgrr++;
		bgrr++;
	}

	str = malloc(sizeof(char) * bgrr + 1);
	if (str == NULL)
		return (NULL);

	for (h = 0; h < ac; h++)
	{
		for (b = 0; av[h][b]; b++)
		{
			str[hym++] = av[h][b];
		}
		str[hym++] = '\n';
	}
	str[hym] = '\0';

	return (str);
}
