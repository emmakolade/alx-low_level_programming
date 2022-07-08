#include "main.h"
#include <unistd.h>

/**
 * _putcha - writes the character c to stdout
 * @c: is the character to print 
 *
 * Return: 1 on sucess
 * On error, -1 is returned and errno is set appropraitely.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
