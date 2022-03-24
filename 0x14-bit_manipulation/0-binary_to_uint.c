#include "main.h"
#include <stdlib.h>

/**
 * _strlen - string length
 * @s: string
 *
 * Return: the length of a string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * power - elevates a to the power of b
 * @a: first parameter
 * @b: second parameter
 *
 * Return: an integer
 */
unsigned int power(int a, int b)
{
	unsigned int result = 1;

	for (; b > 0; b--)
	{
		result = result * a;
	}
	return (result);
}

/**
 * binary_to_uint - takes a binary and parses it to an unsigned int
 * @b: binary number
 *
 * Return: an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binaryConverted = 0, i, j = 0;

	if (b == NULL)
		return (0);
	i = _strlen(b);
	while (i--)
	{
		if (b[i] == '1')
		{
			binaryConverted += power(2, j);
		}
		else if (b[i] == '0')
			;
		else
			return (0);
		j++;
	}
	return (binaryConverted);
}
