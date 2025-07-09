#include "main.h"
#include <stdlib.h>
/**
* _strlen - a function that returns the length of a string.
* @s: The string to get the legth of.
* Return: the length of the string.
*/
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
	n++;
	s++;
	}
	return (n);
}
/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory
 * @str: the string given.
 * Return: a pointer, or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	a = malloc(_strlen(str) * sizeof(char) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
