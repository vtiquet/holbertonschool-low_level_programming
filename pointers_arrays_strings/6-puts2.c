#include "main.h"
/**
* puts2 - function that prints every other character of a string.
* @str: The string to be printed.
*/
void puts2(char *str)
{
int n = 0;
while (str[n] != '\0')
{
if (n % 2 == 0)
{
_putchar(str[n]);
}
n++;
}
_putchar('\n');
}
