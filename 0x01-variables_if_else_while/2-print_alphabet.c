#include <stdio.h>

/**
 * main - prints out the alphabet
 *
 * Return: no error
 */
int main(void)
{
	int charValue;

	for (charValue = 97; charValue <= 122; charValue++)
	{
		putchar(charValue);
		if (charValue == 122)
		{
			putchar('\n');
		}
	}

	return (0);
}
