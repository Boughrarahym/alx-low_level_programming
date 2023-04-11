#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds positive numbers
 * @argc: argument
 * @argv: argument
 * Return: 0 on success, 1 on error
 */

int main(int argc, char **argv)
{
	int h, num, result = 0;
	char *invalid;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (h = 1; argv[h]; h++)
	{
		num = strtol(argv[h], &invalid, 10);
		if (*invalid)
		{
			printf("Error\n");
			return (1);
		}	
    
		else
		{
			result += num;
		}
	}
	printf("%d\n", result);

	return (0);
}
