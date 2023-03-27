#include "main.h"

/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @s: char to check
 *
 * Description: This will reverse a string
 * Return: 0 is success
 */

void rev_string(char *s)

	{
int i, j, len;
char temp;

len = 0;
while (s[len] != '\0')
	{
len++;
	}
for (i = 0, j = len - 1; i < j; i++, j--)
	{
	temp = s[i];
s[i] = s[j];
s[j] = temp;
	}
	}

