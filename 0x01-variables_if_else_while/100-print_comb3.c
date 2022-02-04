#include <stdio.h>

/**
 * main - prints out all combinations of two digits.
 *
 * Return: no error
 */
int main(void)
{
	int firstV;
	int secondV;

	for (firstV = 0; firstV <= 9; firstV++)
	{
		for (secondV = firstV; secondV <= 9; secondV++)
		{
			if (firstV != secondV)
			{
				putchar(firstV + '0');
				putchar(secondV + '0');
				if(firstV == 8 && secondV == 9)
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
