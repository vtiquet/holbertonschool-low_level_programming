#include "main.h"
/**
* _islower - prints the alphabet 10 timescheck if the character is in lowercase
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
