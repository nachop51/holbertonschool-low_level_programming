#include "hash_tables.h"

/**
 * key_index - Gives an index of a key
 *
 * @key:
 * @size: size of the array
 * Return: index at which key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result = 0;

	if (size == 0)
		return (0);

	result = hash_djb2(key);

	return (result % size);
}
