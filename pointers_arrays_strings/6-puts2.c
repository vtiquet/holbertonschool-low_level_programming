#include "main.h"
/**
* puts2 - function that prints every other character of a string.
* @str: The string to be printed.
*/
void puts2(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str += 2;
}
_putchar('\n');
}
