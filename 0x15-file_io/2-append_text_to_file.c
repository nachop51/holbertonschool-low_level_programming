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
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: text
 *
 * Return: 1 if succeed, -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, b;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	b = write (fd, text_content, _strlen(text_content));
	if (b == -1)
		return (-1);
	close(fd);
	return (1);
}
