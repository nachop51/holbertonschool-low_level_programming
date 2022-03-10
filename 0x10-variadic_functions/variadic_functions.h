#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdlib.h>
/**
 * struct format - struct
 * @form: format style
 * @f: pointer to the function
 */
typedef struct format
{
	char *form;
	void (*f)(va_list);
} form_t;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
