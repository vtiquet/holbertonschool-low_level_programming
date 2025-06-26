#include "main.h"
/**
* *_strcat - a function that concatenates two strings.
* @dest: a string.
* @src: another string.
* @n: number of bytres to be printed form src
* Return: the result of the dest string
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, l = 0;
while (dest[i] != '\0')
{
l++;
i++;
}
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[l] = src[i];
l++;
}
return (dest);
}
