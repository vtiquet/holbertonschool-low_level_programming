#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a function that concatenates two strings.
 * @width: a string given.
 * @height: a string given.
 * Return: A pointer to the newly allocated concatenated string,
 * or NULL if memory allocation fails.
 */
int **alloc_grid(int width, int height)
{
	int **a, ih, iw;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		return (NULL);
	}
	for (ih = 0; ih < height; ih++)
	{
		a[ih] = (int *) malloc(width * sizeof(int));
		if (a[ih] == NULL)
		{
			for (iw = 0; iw < ih; iw++)
			{
				free(a[iw]);
			}
			free(a);
			return (NULL);
		}
	}
	for (ih = 0; ih < height; ih++)
	{
		for (iw = 0; iw < width; iw++)
		{
			a[ih][iw] = 0;
		}
	}
	return (a);
}
