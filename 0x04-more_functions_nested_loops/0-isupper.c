#include "main.h"
#include <stdio.h>

/**
 * _issuper - checks if the letter is uppercase or not
 * @letter: the letter
 *
 * Return: 1 or 0
 */
int _issuper(int letter)
{
		if (letter >= 65 && letter <= 90)
		{
			return (1);
		}
		return (0);
}
