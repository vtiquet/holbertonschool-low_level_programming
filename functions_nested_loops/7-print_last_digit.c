#include "main.h"
/**
* print_last_digit - prints the last digit of a number.
* @x: represent an integer.
* Return: the last digit of a number.
*/
int print_last_digit(int x)
{
int last = x % 10;
if (last < 0)
{
last = -last;
}
_putchar(last + '0');
return (last);
}
