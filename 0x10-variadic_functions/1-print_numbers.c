#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints out numbers
 * @separator: separator
 * @n: number of parameters
 * @...: n parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j = 0, num;
	va_list args;

	if (!separator)
		j = 1;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		if (i != 0 && j == 0)
			printf("%s", separator);
		printf("%d", num);
	}
	printf("\n");
	va_end(args);
}
