#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings.
 * @separator: is the string to be printed between numbers.
 * @n: the number of parameters.
 * @...: the numbers of parameters stored.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0;
	char *a;

	va_start(arg, n);

	while (i < n)
	{
		a = va_arg(arg, char *);
		if (a == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", a);
		}

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}

	printf("\n");
	va_end(arg);
}
