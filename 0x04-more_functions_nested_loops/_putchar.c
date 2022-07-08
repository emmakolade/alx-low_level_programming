#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the characte
 * @c: is the
 * Return: 1 on sucess
 * On error, -1 is returned and errno is set appropraitely.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
