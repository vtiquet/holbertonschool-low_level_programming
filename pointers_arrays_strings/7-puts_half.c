#include "main.h"
/**
* puts_half - function that prints half of a string.
* @str: The string to be printed.
*/
void puts_half(char *str)
{
int l = 0, i = 0, n;
while (str[l] != '\0')
{
l++;
}
if ((l % 2) == 0)
n = l / 2;
else
n = (l + 1) / 2;
for (i = n; i < l; i++)
_putchar(str[i]);
_putchar('\n');
}
