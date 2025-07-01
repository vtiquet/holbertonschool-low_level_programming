#include "main.h"
/**
* check_prime - Helper function to recursively check for primality.
* @n: the number.
* @y: the denominator.
* Return: 1 if n is prime, 0 otherwise.
*/
int check_prime(int n, int y)
{
	if (y * y > n)
	{
		return (1);
	}
	if (n % y == 0)
	{
		return (0);
	}

	return (check_prime(n, y + 2));
}
/**
* is_prime_number -  a function that returns 1 if the input
* integer is a prime number, otherwise return 0.
* @n: a given number.
* Return: 1 if the input integer is a prime number, otherwise return 0.
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	return (check_prime(n, 3));
}
