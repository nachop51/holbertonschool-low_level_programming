#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints out all things passed
 * @format: number of parameters
 * @...: n parameters
 */
void print_all(const char *const format, ...)
{
	int i = 0, j = 0;
	char *juan = "";
	va_list args;
	form_t form_ops[] = {
			{"c", print_char},
			{"f", print_float},
			{"i", print_int},
			{"s", print_string},
			{NULL, NULL}};

	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (form_ops[j].form != NULL)
		{
			if (form_ops[j].form[0] == format[i])
			{
				printf("%s", juan);
				form_ops[j].f(args);
				juan = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(args);
}

/**
 * print_char - prints out a char
 * @args: char to print
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints out an integer
 * @args: int to print
 */
void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * print_float - prints out a float
 * @args: char to print
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints out a string
 * @args: string to print
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
