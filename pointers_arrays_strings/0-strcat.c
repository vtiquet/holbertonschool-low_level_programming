#include "main.h"
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
