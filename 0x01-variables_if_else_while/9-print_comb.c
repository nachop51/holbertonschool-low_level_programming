#include <stdio.h>

/**
 * main - prints out all possible combinations of single-digit numbers.
 *
 * Return: no error
 */
int main(void)
{
	int charValue;
	int comma = 44;
	int space = 32;

	for (charValue = 48; charValue <= 57; charValue++)
	{
		if (charValue <= 56)
		{
			putchar(charValue);
			putchar(comma);
			putchar(space);
		}
		else
		{
			putchar(charValue);
		}
	}

	return (0);
}
