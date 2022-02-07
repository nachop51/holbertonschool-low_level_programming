#include "main.h"

/**
 * print_alphabet - prints out the alphabet
 *
 * Return: no error
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 97; letter < 123; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
