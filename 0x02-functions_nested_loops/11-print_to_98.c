#include <stdio.h>

/**
 * print_to_98 - print numbers to 98
 * @num: number
 *
 * Return: no error
 */
void print_to_98(int num)
{
	if (num <= 98)
	{
		for (; num <= 98; num++)
		{
			if (num != 98)
			{
				printf("%d, ", num);
			}
			else
			{
				printf("%d\n", num);
			}
		}
	}
	else if (num >= 98)
	{
		for (; num >= 98; num--)
		{
			printf("%d, ", num);
		}
		if (num != 98)
		{
			printf("%d\n", num);
		}
	}
}
