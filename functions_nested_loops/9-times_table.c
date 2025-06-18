#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0.
*/
void times_table(void)
{
int i, x, y;
for (i = 0; i <= 9; i++)
{
_putchar('0');
for (y = 1; y <= 9; y++)
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
