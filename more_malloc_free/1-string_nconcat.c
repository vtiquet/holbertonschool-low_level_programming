#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: the 1st string.
 * @s2: the 2nd string.
 * @n: the number of bytes to be concatened.
 * Return: A pointer to the allocated memory.
 * If malloc fails, the function causes normal process termination
 * with a status value of NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int ls1 = 0, ls2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[ls1] != '\0')
	{
		ls1++;
	}
	while (s2[ls2] != '\0')
	{
		ls2++;
	}
	if (n >= ls2)
		n = ls2;
	a = malloc((ls1 + n + 1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ls1; i++)
	{
		a[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		a[ls1 + i] = s2[i];
	}
	a[ls1 + i] = '\0';
	return (a);
}
