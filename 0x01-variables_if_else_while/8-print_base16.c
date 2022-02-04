#include <stdio.h>

/**
 * main - prints out all hexadecimal values
 *
 * Return: no error
 */
int main(void)
{
	int charValue;

	for (charValue = 48; charValue <= 102; charValue++)
	{
		if (charValue <= 57)
		{
			putchar(charValue);
		}
		if (charValue >= 97 && charValue <= 102)
		{
			putchar(charValue);
			if (charValue == 102)
			{
				putchar('\n');
			}
		}
	}
	return (0);
}
