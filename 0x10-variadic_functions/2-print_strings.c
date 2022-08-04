#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that print strings
 * @separator: the string to be printed btw the string
 * @n: number of string passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	char *ps;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ps = va_arg(ap, char *);
		
		if (ps == NULL)
			printf("(nil)");
		else
			printf("%s", ps);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
