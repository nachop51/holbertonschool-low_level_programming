#include "variadic_functions.h"

/**
 * print_strings - prints out a string
 * @separator: separator
 * @n: number of parameters
 * @...: n parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j = 0;
	va_list args;

	if (n == 0)
		return;
	if (!separator)
		j = 1;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0 && j == 0)
			printf("%s", separator);
		if (va_arg(args, char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(args, char *));
	}
	printf("\n");
}
