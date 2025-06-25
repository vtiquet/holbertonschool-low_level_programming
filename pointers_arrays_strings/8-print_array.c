#include "main.h"
#include <stdio.h>
/**
* print_array - function that prints n elements of an array of integers.
* @a: The array of integers.
* @n: The number of elements to be printed.
*/
void print_array(int *a, int n)
{
int  i = 0;
while (i < n)
{
printf("%d", a[i]);
i++;
if (i < n)
{
printf(", ");
}
}
printf("\n");
}
