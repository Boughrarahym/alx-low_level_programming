#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int multiplicand, multiplier, product;

for (multiplicand = 0; multiplicand <= 9; multiplicand++)
{
_putchar('0');

for (multiplier = 1; multiplier <= 9; multiplier++)
{
_putchar(',');
_putchar(' ');

product = multiplicand * multiplier;
if (product <= 9)
_putchar(' ');
else
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
_putchar('\n');
}
}
