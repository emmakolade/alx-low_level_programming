#include "main.h"

/**
 * puts2 - print alternating chars of string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (str[i++])
		j++;
{
	for (i = 0; i < j; i += 2)
	_putchar(str[i]);
	i++;
}
_putchar('\n');
}
