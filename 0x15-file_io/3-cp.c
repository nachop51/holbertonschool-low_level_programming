#include "main.h"
#include <stdio.h>

/**
 * openFileTo - opens the file to
 * @filename: name of the file
 *
 * Return: fd
 */
int openFileTo(char *filename)
{
	int fd;

	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd == -1)
	{
		fd = open(filename, O_CREAT | O_WRONLY, 0664);
		if (fd == -1)
		{
			dprintf(2, "Error: Can't write from file %s\n", filename);
			exit(99);
		}
	}
	return (fd);
}

/**
 * openFileFrom - opens the file from
 * @filename: name of the file
 *
 * Return: fd
 */
int openFileFrom(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * main - function that copies the content of a file to another
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: 1 if succeed
 */
int main(int ac, char **av)
{
	int fd, fd2, b, b2; /*fd - file to, fd2 - file from*/
	char *buf;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	if (!buf)
	{
		exit(98);
	}
	fd = openFileTo(av[1]);
	fd2 = openFileFrom(av[2]);
	b = read(fd2, buf, 1024);
	while (b2 != 0 && b != 0)
	{
		if (b == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[2]);
			exit(98);
		}
		b2 = write(fd, buf, b);
		b = read(fd2, buf, 1024);
		if (b2 == -1)
		{
			dprintf(2, "Error: Can't write from file %s\n", av[1]);
			exit(99);
		}
	}
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (1);
}