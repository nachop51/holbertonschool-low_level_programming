#include <main.h>

/**
 * get_endianness - checks the endianness
 *
 * Return: if big endian or little endian(using 1 and 0)
 */
int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char *) &x;

	return ((int)*c);
}
