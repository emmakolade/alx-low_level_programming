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

	unsigned int i;
	int sum = 0;
	
	va_start(ap, args);
	
	for (i = 0; i < args; i++)
		sum += va_args(ap, int);

	va_end(ap);

	return (sum);
}
