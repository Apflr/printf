#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - a function that
 * writes the character c to stdout.
 *
 * @c: The character to print
 *
 * Return: On success 1.
 *
 * On error, -1 is returned,
 * and error number is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
