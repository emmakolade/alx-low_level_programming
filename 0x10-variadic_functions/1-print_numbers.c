#include "variadic_functions.h"
#include <stdio.h>
/**
 * prints_numbers - function that prints numbers
 * @seperator: the string to be printed btw numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i, pn = 0;

	va_start(ap, n);

	for (i = 0; i < v; i++)
	{
		pn = va_arg(ap, const unsigned int);
		printf("%d\n", pn);
	}
	
	va_end(ap);
}
