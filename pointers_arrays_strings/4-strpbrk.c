#include "main.h"
/**
* _strpbrk -  a function that searches a string for any of a set of bytes
* @s: the string.
* @accept: another string.
* Return: the number of bytes.
*/
char *_strpbrk(char *s, char *accept)
{
	int i1 = 0, i2;

	while (s[i1] != '\0')
	{
		for (i2 = 0 ; accept[i2] != '\0'; i2++)
		{
			if (s[i1] == accept[i2])
			{
				return (s + i1);
			}
		}
		i1++;
	}
	return ('\0');
}
