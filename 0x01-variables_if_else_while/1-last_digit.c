#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable n
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int h;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	h = n % 10;
	if (h > 5)
		printf("Last digit of %d is %d and is gretear than 5", n, h);
	else if (h == 0)
		printf("Last digit of %d is %d and is 0", n, h);
	else if (h < 6 && h != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, h);
	printf("\n");
	return (0);
}
