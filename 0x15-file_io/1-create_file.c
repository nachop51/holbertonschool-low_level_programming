#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: text
 *
 * Return: 1 on success or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, b;

	if (!filename)
		return (-1);

	fd = open(filename, O_TRUNC | O_WRONLY);
	if (fd == -1)
	{
		fd = open(filename, O_CREAT | O_RDONLY | O_WRONLY, 0600);
		if (fd == -1)
			return (-1);
		b = write(fd, text_content, _strlen(text_content));
		if (b == -1)
			return (-1);
		close(fd);
		return (1);
	}
	b = write(fd, text_content, _strlen(text_content));
	if (b == -1)
		return (-1);
	close(fd);
	return (1);
}
