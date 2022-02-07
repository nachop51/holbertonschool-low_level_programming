#include "main.h"

/**
 * _isalpha - prints out if a letter is alpha or not
 * @letter: letter to check
 *
 * Return: no error
 */
int _isalpha(int letter)
{
	if (letter > 64 && letter < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
