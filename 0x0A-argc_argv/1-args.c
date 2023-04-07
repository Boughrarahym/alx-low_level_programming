#include <stdio.h>

/**
* main - prints the number of arguments passed to the program
* followed by a new line
* @argc: the number of arguments passed to the program
* @argv: an array
* Return: always 0
*
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	int h = 0, b;

	while (h < argc)
	{
		b = h;
		h++;
	}
	printf("%d\n", b);
	return (0);
}
