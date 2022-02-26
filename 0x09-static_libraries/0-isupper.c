#include "main.h"

/**
 * _isupper - checks if the letter is uppercase or not
 * @letter: the letter
 *
 * Return: 1 or 0
 */
int _isupper(int letter)
{
		if (letter >= 65 && letter <= 90)
		{
			return (1);
		}
		return (0);
}
