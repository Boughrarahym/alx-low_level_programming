#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * pal_sup - checks if a string is a palindrome
 * @s: string to check
 * @st: start
 * @end: end
 * Return: 1 if palindrome, 0 if not
 */

int pal_sup(char *s, int st, int end)
{
	if (st >= end)
		return (1);
	if (s[st] == s[end])
		return (pal_sup(s, st + 1, end - 1));
	else
		return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int h = _strlen_recursion(s);

	if (h == 0)
		return (1);
	return (pal_sup(s, 0, h - 1));
}
