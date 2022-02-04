#include <stdio.h>

/**
 * main - prints out all numbers of base 10
 *
 * Return: no error
 */
int main(void)
{
	int charValue;

	for (charValue = 48; charValue <= 57; charValue++)
	{
		putchar(charValue);
		if (charValue == 57)
		{
			putchar('\n');
		}
	}
	return (0);
}
