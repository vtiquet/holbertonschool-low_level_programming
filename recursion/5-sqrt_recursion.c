#include "main.h"
/**
 * _find_sqrt - a function to recursively find the natural square root.
 * @n: The number for which to find the square root.
 * @y: The current guess for the square root.
 * Return: The natural square root of @n,
 * or -1 if no natural square root exists.
 */
int _find_sqrt(int n, int y)
{

	if (y * y == n)
	{
		return (y);
	}
	if (y * y > n)
	{
		return (-1);
	}
	return (_find_sqrt(n, y + 1));
}

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
		return (_find_sqrt(n, 1));
}
