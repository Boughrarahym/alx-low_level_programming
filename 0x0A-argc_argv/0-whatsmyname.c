#include <stdio.h>

/**
 * main - program that prints its name
 *  followed by a new line
 * @argc: argument
 * @argv: array of arguments
 * Return: Always 0
 */
int main(__attribute__((unused)) int argc, char *argv[])

{
	printf("%s\n", *argv);

	return (0);
}
