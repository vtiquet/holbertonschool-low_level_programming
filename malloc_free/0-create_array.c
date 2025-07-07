#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array.
 * @c: the specified char.
 * Return: a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
	{
		return ('\0');
	}
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
