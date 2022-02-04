#include <stdio.h>

/**
 * main - prints out all possible different combinations of three digits
 *
 * Return: no error
 */
int main(void)
{
	int firstV;
	int secondV;
	int thirdV;

	for (firstV = 0; firstV <= 9; firstV++)
	{
		for (secondV = firstV; secondV <= 9; secondV++)
		{
			for (thirdV = secondV; thirdV <= 9; thirdV++)
			{
				if (firstV != secondV && firstV != thirdV && secondV != thirdV)
				{
					putchar(firstV + '0');
					putchar(secondV + '0');
					putchar(thirdV + '0');
					if (firstV == 7 && secondV == 8 && thirdV)
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
	}

	return (0);
}
