#include "main.h"
/**
* _sqrt_recursion -  a function that returns
* the natural square root of a number.
* @n: a given number.
* Return: the natural square root of a number.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (n * _sqrt_recursion(n, 1));
}
