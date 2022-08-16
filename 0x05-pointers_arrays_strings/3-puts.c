#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string
 * Return: 0.
 */
void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
{
	_putchar(str[len]);
}
	_putchar('\n');
}
