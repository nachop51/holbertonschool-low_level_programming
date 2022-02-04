#include <stdio.h>

/**
 * main - prints out the alphabet in lowercase and uppercase
 *
 * Return: no error
 */
int main(void)
{
	int charValue;

	for (charValue = 97; charValue <= 122; charValue++)
	{
		putchar(charValue);
	}

	for (charValue = 65; charValue <= 90; charValue++)
	{
		putchar(charValue);
		if (charValue == 90)
		{
			putchar('\n');
		}
	}

	return (0);
}
