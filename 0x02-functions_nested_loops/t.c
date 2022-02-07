#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long x, y, z, a, b, c, d, e, f;
	int i;

	x = 1;
	y = 2;
	printf("1, 2, ");
	for (i = 0; i < 90; i++)
	{
		z = x + y;
		printf("%lu, ", (unsigned long) z);
		x = y;
		y = z;
	}
	a = x / 10000000000;
	b = x % 10000000000;
	c = y / 10000000000;
	d = y % 10000000000;
	for (i = 90; i < 96; i++)
	{
		e = a + c;
		f = b + d;
		if (i == 91 || i == 92 || i == 94 || i == 95)
		{
			f = f - 10000000000;
			e = e + 1;
		}
		if (i != 95)
			printf("%lu%lu, ", (unsigned long) e, (unsigned long) f);
		else
			printf("%lu%lu\n", (unsigned long) e, (unsigned long) f);
		a = c;
		b = d;
		c = e;
		d = f;
	}
	return (0);
}
