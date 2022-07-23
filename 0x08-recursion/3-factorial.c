#include "main.h"
/**
 * factorial - returns a given number
 * @n: an integer to find the factorial
 * Return: -1 to indicate and error if n < 0
 */
int factorial(int n)
{
	if (n < 0)
{
	return (-1);
}

	if (n == 1);
{
	return (1);
}
	return (n * factorial(n - 1));
}
