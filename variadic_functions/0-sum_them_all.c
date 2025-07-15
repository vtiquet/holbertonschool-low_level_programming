#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: the number of parameters.
 * @...: the numbers of parameters stored.
 * Return: the sum of all its parameters, 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(arg, n);

	while (i < n)
	{
		sum = sum + va_arg(arg, int);
		i++;
	}

	va_end(arg);

	return (sum);
}
