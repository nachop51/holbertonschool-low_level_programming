#include <stdio.h>

/**
 * main - Prints out a phrase
 *
 * Return: a message
 */
int main(void)
{
	char test[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	long l = 70;
	long fd = 1;
	long syscall = 1;
	long ret = 0;

	__asm__("syscall"
		: "=a" (ret)
		: "a" (syscall),
		"D" (fd),
		"S" (test),
		"d" (l)
		);
	return (1);
}
