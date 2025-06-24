#include "main.h"
/**
* rev_string - a function that reverses a string.
* @s: The string to be printed.
*/
void rev_string(char *s)
{
int l = 0, i = 0;
char tmp;
while (s[l] != '\0')
{
l++;
}
l--;
while (i < l)
{
tmp = s[i];
s[i]  = s[l];
s[l] = tmp;
i++;
l--;
}
}
