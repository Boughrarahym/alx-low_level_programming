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
	int cents, h, b;
	int dh[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	b = 0;

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (h = 0; h < 5 && cents >= 0; h++)
	{
	while (cents >= dh[h])
	{
	b++;
	cents -= dh[h];
	}
	}

	printf("%d\n", b);
	return (0);
}
