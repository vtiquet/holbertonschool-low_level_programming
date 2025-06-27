#include "main.h"
/**
* reverse_array - a function that reverses the content of an array.
* @a: an array.
* @n: the number of elements of the array.
*/
void reverse_array(int *a, int n)
{
int tmp, i = n - 1;
while (i >= n / 2)
{
tmp = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = tmp;
i--;
}
}
