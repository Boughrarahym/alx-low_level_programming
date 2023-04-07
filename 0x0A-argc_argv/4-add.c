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
	int cents, num_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			num_coins++;
	if ((cents - 25) >= 0)
	{
		cents -= 25;
		continue;
	}
	if ((cents - 10) >= 0)
	{
		cents -= 10;
		continue;
	}
	if ((cents - 5) >= 0)
	{
		cents -= 5;
		continue;
	}
	if ((cents - 2) >= 0)
	{
		cents -= 2;
		continue;
	}
	cents--;
		}
	}
	printf("%d\n", num_coins);
	return (0);
}
