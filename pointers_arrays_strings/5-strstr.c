#include "main.h"
/**
* _strstr -  a function that searches a string for any of a set of bytes
* @haystack: the string.
* @needle: another string.
* Return: the number of bytes.
*/
char *_strstr(char *haystack, char *needle)
{
	int i1 = 0, i2;

	while (haystack[i1] != '\0')
	{
		for (i2 = 0 ; needle[i2] != '\0'; i2++)
		{
			if (haystack[i1] == needle[i2])
			return (needle);
		}
		i1++;
	}
	return ('\0');
}
