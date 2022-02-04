#include <stdio.h>

/**
 * main - prints things
 *
 * Return: no error
 */
int main(void)
{
	int a = 0, b = 0, count1;
	int d = 0, e = 1, count2;

	for (count1 = 0; count1 < 100; count1++)
	{
		a = count1 / 10;
		b = count1 % 10;

		for (count2 = 0; count2 < 100; count2++)
		{
			d = count2 / 10;
			e = count2 % 10;

			if (count1 != count2 && count1 < count2)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(d + '0');
				putchar(e + '0');
				if (count1 != 98 || count2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
