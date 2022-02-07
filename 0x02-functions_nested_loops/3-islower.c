#include "main.h"

/**
 * _islower - checks if is lower or not
 *
 * Return: no error
 */
int _islower(int letter)
{
	if (letter > 96 && letter < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
