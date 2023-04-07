#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * followed by a new line
 * @argc: number of arguments passed to the program
 * @argv: array
 * Return: 0 if successful, 1 if an error occurred
 */

int main(int argc, char *argv[])
{
	int sum = 0, b, h;

	for (h = 1; h < argc; h++)
	{
		for (b = 0; argv[h][b] != '\0'; b++)
	{
		if (argv[h][b] < '0' || argv[h][b] > '9')
	{
		printf("Error\n");
		return (1);
	}
	}
	sum += atoi(argv[h]);
	}

	printf("%d\n", sum);

	return (0);
}
