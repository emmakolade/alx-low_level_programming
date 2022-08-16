#include <unistd.h>
/**
 * _putchar - writes the character to c to stdout
 * @c: the character to print
 *
 * Return: on succes 1.
 * on error -1 and errno is set appropraitely 
 */`
int _putchar(char c)
{
	return (write(1, &c, 1));
}
