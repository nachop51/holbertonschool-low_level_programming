#include "main.h"

/**
 * clear_bit - clears a bit in a given number
 * @n: number
 * @index: index to clear
 *
 * Return: returns 1 if succeed or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long) * 8)
	{
		*n &=  ~(1 << index);
		return (1);
	}
	else
		return (-1);
}
