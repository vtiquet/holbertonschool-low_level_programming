#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory
 * @str: the string given.
 * Return: a pointer, or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int i, l;

	if (str == NULL)
	{
		return (NULL);
	}
	l = strlen(str) + 1;
	a = malloc(l * sizeof(char));
	for (i = 0; i < l; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
