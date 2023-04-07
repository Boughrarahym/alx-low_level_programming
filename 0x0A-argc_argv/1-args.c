#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * followed by a new line
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
    int h = 0;

    while (*argv != NULL)
    {
        h++;
        argv++;
    }

    printf("%d\n", h);

    return (0);
}
