#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers
 * @separator: the string to be printed btw numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i, pn = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		pn = va_arg(ap, int);
		printf("%d", pn);
	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
