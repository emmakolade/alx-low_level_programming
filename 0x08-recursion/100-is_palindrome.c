#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: the string to be checked
 *
 * Return: if the string is a palindrome 1
 * or 0 if the string is not a palindrome
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
	return (1);

	return (check_palindrome(s, len, index));
}
