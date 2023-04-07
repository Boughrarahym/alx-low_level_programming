#include <stdio.h>

/**
* main - prints the number of arguments passed to the program
* followed by a new line
* @argc: the number of arguments passed to the program
* @argv: an array
* Return: always 0
*
*/

int main(int argc, char *argv[])
{
	int h;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (h = 0; *argv; h++, argv++)

		printf("%d\n", h - 1);
	}

	return (0);
}
