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
	int i, size1;
	unsigned int sumdiag1, sumdiag2;

	s = 0;
	sumdiag1 = 0;
	sumdiag2 = 0;

	s = (size * size) - 1;

	for (i = 0; i <= s; i = i + (s + 1))
	{
		sumdiag1 = sumdiag1 + a[i];
	}
	for (i = (s - 1); i < s; i = i + (s - 1))
	{
		sumdiag2 = sumdiag2 + a[i];
	}
	printf("%d, %d\n", sumdiag1, sumdiag2);
}
