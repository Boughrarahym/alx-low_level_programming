#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * ending with a new line
 * @argc: the number of arguments passed
 * @argv: array
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int h;

	for (h = 0; h < argc; h++)
		printf("%s\n", argv[h]);
	return (0);
}
