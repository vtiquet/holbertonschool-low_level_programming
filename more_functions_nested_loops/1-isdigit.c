#include "main.h"
/**
* _isdigit - check if the character is a digit
* @c: represent a unsigned charactere
* Return: 1 if character is a digit, 0 otherwise.
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
