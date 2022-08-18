#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the bit
 * @index: the index starting from '0'
 *
 * Return: Always 0.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	else if (((*n >> index) | 1))
	{
		*n -= 1 << index;
	}
	return (1);
}