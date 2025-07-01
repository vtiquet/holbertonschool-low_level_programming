#include "main.h"
#include <stdio.h>
/**
* print_diagsums -  a function that prints the sum of
* the two diagonals of a square matrix of integers.
* @a: an array.
* @size: the scope of the array.
*/
void print_diagsums(int *a, int size)
{
	int i, n1 = 0, n2 = 0;

	for (i = 0; i < size; i++)
	{
		n1 = n1 + a[i * size + i];
		n2 = n2 + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", n1, n2);
}
