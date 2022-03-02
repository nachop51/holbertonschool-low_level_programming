#include <stdlib.h>
#include <stdio.h>

/**
 * main - concatenates all arguments
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: concatenated array
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, n = 0, count = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			j++;
			count++;
		}
		count++;
	}
	count++;
	s = malloc(sizeof(char) * count);
	if (s == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		j = 0;
		while(av[n][j])
		{
			s[count] = av[n][j];
			j++;
			count++;
		}
		s[count] = '\n';
		count++;
	}
	s[count] = '\0';

	return (s);
}
