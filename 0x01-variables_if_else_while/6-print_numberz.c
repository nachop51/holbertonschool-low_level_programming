#include <stdio.h>

/**
 * main - prints out all numbers of base 10
 *
 * Return: no error
 */
int main(void)
{
	int charValue;

	for (charValue = 0; charValue <= 9; charValue++)
	{
		putchar(charValue + '0');
		if (charValue == 9)
		{
			putchar('\n');
		}
	}
	return (0);
}
