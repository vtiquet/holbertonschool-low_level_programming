#include "main.h"
/**
* _pow_recursion -  a function that returns the value of x
* raised to the power of y.
* @x: a given number.
* @y: a given power.
* Return: the value of x by the power of y.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
