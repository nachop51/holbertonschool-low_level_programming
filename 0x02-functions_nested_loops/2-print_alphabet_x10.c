#include "main.h"

/**
 * print_alphabet_x10 - prints out the alphabet
 *
 * Return: no error
 */
void print_alphabet_x10(void)
{
	int letter;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (letter = 97; letter < 122; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
