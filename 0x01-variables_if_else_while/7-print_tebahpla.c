#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	char h;

	for (h = 'z'; h >= 'a'; h--)
		putchar(h);

	putchar('\n');

return (0);
}
