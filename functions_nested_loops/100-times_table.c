#include "main.h"
/**
* print_times_table - prints the n times table.
* @n: number of the time table
*/
void print_times_table(int n)
{
int i, x, y;
if (n >= 0 && n <= 15)
for (i = 0; i <= n; i++)
{
_putchar('0');
for (y = 1; y <= n; y++)
{
_putchar(',');
_putchar(' ');
x = i * y;
if (x <= 9)
_putchar(' ');
else
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
}
_putchar('\n');
}
}
