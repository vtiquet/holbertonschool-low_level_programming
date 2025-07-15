#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers.
 * @separator: is the string to be printed between numbers.
 * @n: the number of parameters.
 * @...: the numbers of parameters stored.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0;

	va_start(arg, n);

	while (i < n)
	{
		printf("%d", va_arg(arg, int));

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}

	printf("\n");
	va_end(arg);
}
