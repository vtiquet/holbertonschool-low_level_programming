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

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (i1 = 0; haystack[i1] != '\0'; i1++)
	{
		if (haystack[i1] == needle[0])
		{
			i2 = 0;
			while (needle[i2] != '\0' && haystack[i1 + i2] != '\0'
				&& haystack[i1 + i2] == needle[i2])
			{
				i2++;
			}
			if (needle[i2] == '\0')
			{
				return (haystack + i1);
			}
		}
	}
	return ('\0');
}
