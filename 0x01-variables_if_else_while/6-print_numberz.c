#include <stdio.h>

/**
 * main - prints all single digit numbers of base ten
 *
 * Return: Always 0
 */

int main(void)
{
	int h;

	for (h = 0; h < 10; h++)
		putchar((h % 10) + '0');

	putchar('\n');

	return  (0);
}
