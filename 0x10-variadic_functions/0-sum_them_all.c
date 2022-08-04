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

	unsigned int i, sum = 0;
	
	if (n == 0)
		return (0);
	
	va_start(ap, n);
	
	for (i = 0; i < n; i++)
		sum += va_arg(ap, const unsigned int);

	va_end(ap);

	return (sum);
}
