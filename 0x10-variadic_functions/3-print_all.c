#include "variadic_functions.h"
/**
 * print_all - prints out all things passed
 * @format: number of parameters
 * @...: n parameters
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	va_start(args, format);
	va_end(args);
}

void print_char(va_list args)
{
	printf("&c", va_list(args, int));
}