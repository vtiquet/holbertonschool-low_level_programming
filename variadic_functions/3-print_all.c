#include "variadic_functions.h"
/**
 * print_all - a function that prints anything.
 * @format: is a list of types of arguments passed to the function.
 * @...: the numbers of parameters stored.
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	char *separator = "";
	unsigned int i = 0;
	char *s_arg;

	va_start(arg, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arg, double));
				break;
			case 's':
				s_arg = va_arg(arg, char *);
				if (s_arg == NULL)
					s_arg = "(nil)";
				printf("%s%s", separator, s_arg);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(arg);
}
