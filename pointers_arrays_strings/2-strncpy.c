#include "main.h"
/**
* _strncpy - function that copies the string to the buffer for n bytes.
* @dest: the buffer.
* @src: the string.
* @n: the number of bytes to copy.
* Return: the pointer to dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int  i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
dest[i] = src[i];
return (dest);
}
