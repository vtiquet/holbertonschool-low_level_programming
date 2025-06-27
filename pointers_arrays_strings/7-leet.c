#include "main.h"
/**
* leet - a function that encodes a string into 1337.
* @s: the string.
* Return: the value of the string with leet encoding.
*/
char *leet(char *s)
{
char *l = "aAeEoOtTlL";
char *n = "4433007711";
int i1 = 0, i2;
while (s[i1] != '\0')
{
for (i2 = 0 ; i2 <= 10; i2++)
{
if (s[i1] == l[i2])
{
s[i1] = n[i2];
}
}
i1++;
}
return (s);
}
