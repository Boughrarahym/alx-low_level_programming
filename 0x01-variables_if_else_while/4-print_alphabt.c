#include <stdio.h>

/**
 * main - prints the alphabet in lowercase exept q and e
 *
 * Return: Always 0
 */

int main(void)
{
	char h;

	for (h = 'a'; h <= 'z'; h++)
		if (h != 'q' && h != 'e')
			putchar(h);
	putchar('\n');
	return (0);
}

