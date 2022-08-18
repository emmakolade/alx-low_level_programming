#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: the bit
 * @index: the index starting from 0 of the bit
 *
 * Return: 1 if it worked or -1 if there is error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	else if (!((*n >> index) & 1))
	{
		*n += 1 << index;
	}
	return (1);
}
