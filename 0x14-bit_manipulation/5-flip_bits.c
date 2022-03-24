#include "main.h"

/**
 * flip_bits - function that calculates how bits it'll take to get the other n
 * @n: number
 * @m: the other number
 *
 * Return: the number of bits that it will take to change the number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, aux;

	aux = n ^ m;
	while (aux)
	{
		if ((aux & 1) == 1)
			i++;
		aux >>= 1;
	}
	return (i);
}
