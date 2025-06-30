#include "main.h"
/**
* _memcpy -  function that fills memory with a constant byte.
* @dest: memory area.
* @src: memory area.
* @n: the number of bytes.
* Return: the memory area.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
