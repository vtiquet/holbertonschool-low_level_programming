#include "main.h"
/**
* _islower - check if the character is lowercase
* @c: represent a unsigned charactere
* Return: 1 if character is lowercase, 0 otherwise.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
