#include "main.h"
/**
 * _isdigit - checks for a digit of 0 - 9
 * @c: the number to be checked
 * Return: 1 if there is a number 0-9, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);

	else
	{
		return (0);
	}
}
