#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: name of the file
 * @letters: number of letters
 *
 * Return: number of letters that it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, b;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	b = read(fd, buf, letters);
	if (b == -1)
		return (0);

	b = write(STDOUT_FILENO, buf, b);
	if (b == -1)
		return (0);

	close(fd);

	return (b);
}
