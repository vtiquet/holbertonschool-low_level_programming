#include "main.h"
/**
* print_diagonal - function that draws a diagonal line on the terminal.
* @n: is the number of times the character \ should be printed.
*/
void print_diagonal(int n)
{
int i, l;
if (n > 0)
for (l = 0 ; l < n; l++)
{
for (i = 0; i < l; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
else
_putchar('\n');
}
