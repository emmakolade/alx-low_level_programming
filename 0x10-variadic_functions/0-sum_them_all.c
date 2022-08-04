#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - the function to summ all parameters
 * @n: the paramter
 *
 * Return: sum or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, args);

	int i = 0, sum = 0;

	for (i = 0; i < args; i++)
		sum += va_args(ap, int);

	va_end(ap);

	return (sum);
}
