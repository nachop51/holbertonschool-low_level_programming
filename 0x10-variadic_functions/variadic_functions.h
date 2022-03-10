#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdio.h>
#include <stdarg.h>
int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

typedef struct format
{
	char *format;
	int (*f)(va_list);
} type_format;

#endif