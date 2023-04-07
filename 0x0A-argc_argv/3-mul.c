#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * followed by a new line
 * @argc: number of arguments passed to the program
 * @argv: array
 * Return: 0 on success, 1 on error
 */

int main(int argc, char **argv)
{
	int n1, n2, resultat;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	resultat = n1 * n2;

		printf("%d\n", resultat);

	return (0);
}
