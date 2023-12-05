#include "main.h"

/**
 * _putchar - write the character c to stdout
 * @c: character to print
 *
 * Return: On success 1
 * On error, -1 is should return, and errno is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
