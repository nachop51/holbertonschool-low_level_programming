#include <stdio.h>

/**
 * main - prints out the alphabet in reverse
 *
 * Return: no error
 */
int main(void)
{
	int charValue;

	for (charValue = 122; charValue >= 97; charValue--)
	{
		putchar(charValue);
		if (charValue == 97)
		{
			putchar('\n');
		}
	}

	return (0);
}
