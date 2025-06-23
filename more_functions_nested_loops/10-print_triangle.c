#include "main.h"
/**
* print_square - function that prints a triangle
* @size: is the size of the triangle
*/
void print_triangle(int size)
{
int i, l;
if (size > 0)
for (l = 0 ; l < size; l++)
{
for (i = size - 1; i > l; i--)
_putchar(' ');
for (i = 0 ; i < l + 1 ; i++)
_putchar('#');
_putchar('\n');
}
else
_putchar('\n');
}
