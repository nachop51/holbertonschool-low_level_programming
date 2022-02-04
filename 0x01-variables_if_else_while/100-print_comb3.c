#include <stdio.h>

/**
 * main - prints out all combinations of two digits.
 *
 * Return: no error
 */
int main(void)
{
	int charValue;
	int charValue2;

	for (charValue = 0; charValue <= 9; charValue++)
	{
		for (charValue2 = charValue; charValue2 <= 9; charValue2++)
		{
			if (charValue != charValue2)
			{
				putchar(charValue + '0');
				putchar(charValue2 + '0');
				if(charValue == 8 && charValue2 == 9) 
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
