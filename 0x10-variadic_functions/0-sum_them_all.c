#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all passed numbers
 * @n: number of arguments
 * @...: n parameters to sum
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}
	va_end(args);
	return (result);
}
