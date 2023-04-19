#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int h, b;
	int (*ptr)(int, char **);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	h = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = &main;
	for (b = 0; b < h; b++)
		printf("%.2x ", *((unsigned char *)(ptr + b)));
	printf("\n");
	return (0);
}
