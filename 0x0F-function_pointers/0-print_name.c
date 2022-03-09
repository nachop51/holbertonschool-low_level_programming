#include "function_pointers.h"

/**
 * print_name - prints out the name passed to the function
 * @name: of the function
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	if (!name)
		return;
	(*f)(name);
}
