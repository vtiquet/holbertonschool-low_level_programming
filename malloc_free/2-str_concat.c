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
* _strcpy - function that copies the string to the buffer.
* @dest: the buffer.
* @src: the string.
* Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int  i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
* *_strcat - a function that concatenates two strings.
* @dest: a string.
* @src: another string.
* Return: the result of the dest string
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, l = 0;

	while (dest[i] != '\0')
	{
		l++;
		i++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[l] = src[i];
		l++;
	}
	return (dest);
}
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

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	a = malloc((_strlen(s1) + _strlen(s2)) * sizeof(char) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	_strcpy(a, s1);
	_strcat(a, s2);
	return (a);
}
