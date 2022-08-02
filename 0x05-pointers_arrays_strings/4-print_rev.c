#include "main.h"

/**
 * print_rev - prints string backwards
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int str;

	for (str = 0; s[str] != '\0'; str++)
{
	for (str = str - 1; str >= 0; str--)
}
{
	_putchar(s[str]);
}
	_putchar('\n');
}
