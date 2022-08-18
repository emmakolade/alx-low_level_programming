#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: the num
 * @m: the number to flip n to
 * Return: the neccessary number of bits to flip..
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, n_bits;

	xor = n ^ m;
	n_bits = 0;

	{
		n_bits += (xor & 1);
		xor >> = 1;
	}
	return (n_bits);
}
