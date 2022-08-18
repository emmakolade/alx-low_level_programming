#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int.
 * @b: a pointer to the string of 0 and 1 chars.
 *
 * Return: the converted number or 0
 * if there is 1 or more chars in the string b that != 0 | 1
 * if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int m = 0, n = 1;
	int str;

	if (b == NULL)
		return (0);

	for (str = 0; b[str]; str++)

	for (str -= 1; str >= 0; str--)
	{
		if (b[str] != '0' && b[str] != '1')
			return (0);
		
		m += (b[str] - '0') * n;
		n *= 2;
	}
	
	return (m);
}
