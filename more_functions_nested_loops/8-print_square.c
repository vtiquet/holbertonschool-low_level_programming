#include "main.h"
/**
* print_square - unction that prints a square.
* @size: is the size of the square
*/
void print_square(int size)
{
int i, l;
if (size > 0)
for (l = 0 ; l < size; l++)
{
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
else
_putchar('\n');
}
