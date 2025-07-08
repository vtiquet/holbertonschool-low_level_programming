#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: the number of elements in the array.
 * @size: the size of each element in bytes.
 * Return: A pointer to the allocated memory.
 * Returns NULL if nmemb or size is 0, or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int tots, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	tots = nmemb * size;
	a = malloc(tots);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < tots; i++)
		a[i] = 0;
	return (a);
}
