#include "main.h"
/**
* string_toupper - a function that changes all lowercase letters
* of a string to uppercase.
* @s: the string.
* Return: the value of the string in lowercase.
*/
char *string_toupper(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
i++;
}
return (s);
}
