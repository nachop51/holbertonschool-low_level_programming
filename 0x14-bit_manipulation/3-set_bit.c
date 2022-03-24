#include "main.h"

/**
 * set_bit - sets a bit to 1 at given index
 * @n: number
 * @index: index to set
 *
 * Return: 1 if succeed -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long) * 8)
	{
		*n = *n | (1 << index);
		return (1);
	}
	else
		return (-1);
}
