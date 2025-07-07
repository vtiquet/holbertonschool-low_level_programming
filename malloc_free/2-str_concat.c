#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: a string given.
 * @s2: a string given.
 * Return: A pointer to the newly allocated concatenated string,
 * or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int l;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	l = strlen(s1) + strlen(s2) + 1;
	a = malloc(l * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	strcpy(a, s1);
	strcat(a, s2);
	return (a);
}
