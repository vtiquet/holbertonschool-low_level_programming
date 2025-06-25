#include "main.h"
/**
* _atoi - function that convert a string to an integer.
* @s: the string.
* Return: The integer value of the string, or 0 if no numbers are present
*/
int _atoi(char *s)
{
int i = 0, sign = 1, n = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
n = (n * 10) + (s[i] - '0');
}
else if (n > 0)
{
break;
}
i++;
}
return (sign *n);
}
