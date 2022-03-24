#include "main.h"
#include <stdlib.h>

/**
 * get_bit - prints out the bit asked
 * @n: number
 * @index: index asked
 *
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < sizeof(unsigned long) * 8)
	{
		if (((n >> index) & 1) == 1 || ((n >> index) & 1) == 0)
			return ((n >> index) & 1);
		return (-1);
	}
	else
		return (-1);
}
