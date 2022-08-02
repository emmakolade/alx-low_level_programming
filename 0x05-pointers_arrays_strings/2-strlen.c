#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	for (s = 0; s[len] != '\0'; s++)
{
	len++;
}
	return (len);
}
