#include "main.h"
/**
 * _strlen_recursion - ret the lenght of a string
 * @s: the string to be located
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
{
	len += _strlen_recursion(s + 1);
	len++;
}
{
	return (len);
}
}
