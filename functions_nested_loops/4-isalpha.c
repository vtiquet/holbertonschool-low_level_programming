#include "main.h"
/**
* _isalpha - checks for alphabetic character.
* @c: represent a unsigned charactere
* Return: 1 if character is a letter, 0 otherwise.
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
