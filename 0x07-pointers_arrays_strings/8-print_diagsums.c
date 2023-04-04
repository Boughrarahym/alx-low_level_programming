#include "main.h"
#include <stdio.h>

/**
  *print_diagsums - function that prints sum of two diagonals of a square.
  *@a: pointer
  *@size: size
  *Return: void.
  */

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sumdiag1, sumdiag2;

	sumdiag1 = 0;
	sumdiag2 = 0;

	for (i = 0; i < size; i++)
	{
		sumdiag1 += a[(size * i) + i];
		sumdiag2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sumdiag1, sumdiag2);
}
