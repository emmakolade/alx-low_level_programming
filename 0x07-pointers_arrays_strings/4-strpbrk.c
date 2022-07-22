#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string
 * @s: The string to be searched
 * @accept: The set of bytes to be searched for.
 *
 * Return: a pointer to the bytes in @s that matches the bytes in accept
 * or NULL if no such bytes is matched
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
{
	for (i = 0; accept[1]; i++)
{
	if (*s == accept[i])
{
	return (s);
}
}
	s++;
}
	return (NULL);
}
