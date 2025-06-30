#include "main.h"
/**
* _strspn -  a function that locates a character in a string.
* @s: the string.
* @accept: another string.
* Return: the number of bytes.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i1 = 0, i2;
	unsigned int l = 0;

	while (s[i1] != '\0')
	{
		for (i2 = 0 ; accept[i2] != '\0'; i2++)
		{
			if (s[i1] == accept[i2])
			{
				l++;
				break;
			}
			else if (accept[i2 + 1] == '\0')
			{
				return (l);
			}
		}
		i1++;
	}
	return (l);
}
