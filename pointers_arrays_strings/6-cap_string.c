#include "main.h"
/**
* cap_string - a function that capitalizes all words of a string.
* @s: the string.
* Return: the value of the string with all words capitalized.
*/
char *cap_string(char *s)
{
int i = 0;
while (s[i] != '\0')
{
while (!(s[i] >= 'a' && s[i] <= 'z'))
{
i++;
}
if (s[i - 1] == ' ' ||
s[i - 1] == '\t' ||
s[i - 1] == '\n' ||
s[i - 1] == ',' ||
s[i - 1] == ';' ||
s[i - 1] == '.' ||
s[i - 1] == '!' ||
s[i - 1] == '?' ||
s[i - 1] == '"' ||
s[i - 1] == '(' ||
s[i - 1] == ')' ||
s[i - 1] == '{' ||
s[i - 1] == '}' ||
i == 0)
{
s[i] = s[i] - 32;
}
i++;
}
return (s);
}
