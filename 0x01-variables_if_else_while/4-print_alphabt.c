#include <stdio.h>

/**
 * main - prints out the alphabet without the q and e
 *
 * Return: no error
 */
int main(void)
{
	int charValue;

	for (charValue = 97; charValue <= 122; charValue++)
	{
		if (charValue != 101 && charValue != 113)
		{
			putchar(charValue);
		}
		if (charValue == 122)
		{
			putchar('\n');
		}
	}
	return (0);
}
