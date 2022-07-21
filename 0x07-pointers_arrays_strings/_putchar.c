#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: the char to print
 *
 * Return: 1 if successful.
 * On error, -1 and errno is set appropraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
