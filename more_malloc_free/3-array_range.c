#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: the lowest number.
 * @max: the highest number.
 * Return: A pointer to the allocated memory.
 * Returns NULL if nmemb or size is 0, or if malloc fails.
 */
int *array_range(int min, int max)
{
	int *a;
	int tot, i;

	if (min > max)
		return (NULL);
	tot = max - min + 1;
	a = malloc(tot * sizeof(int));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < tot; i++)
		a[i] = min + i;
	return (a);
}
