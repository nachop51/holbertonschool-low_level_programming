#include <stdio.h>
#include <unistd.h>
#include <string.h> // for srtlen

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
		putchar(charValue);
		if (charValue != 57)
		{
			putchar(comma);
			putchar(space);
		}
		else
		{
			putchar('\n');
		}
	}

	return (0);
}
