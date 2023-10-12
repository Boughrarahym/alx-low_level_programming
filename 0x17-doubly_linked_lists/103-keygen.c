#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function that generates and prints
 *  passwords for the crackme5 executable
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *c;
	int len = strlen(argv[1]), i, t;

	c = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	t = (len ^ 59) & 63;
	password[0] = c[t];

	t = 0;
	for (i = 0; i < len; i++)
		t += argv[1][i];
	password[1] = c[(t ^ 79) & 63];

	t = 1;
	for (i = 0; i < len; i++)
		t *= argv[1][i];
	password[2] = c[(t ^ 85) & 63];

	t = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > t)
			t = argv[1][i];
	}
	srand(t ^ 14);
	password[3] = c[rand() & 63];

	t = 0;
	for (i = 0; i < len; i++)
		t += (argv[1][i] * argv[1][i]);
	password[4] = c[(t ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		t = rand();
	password[5] = c[(t ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
