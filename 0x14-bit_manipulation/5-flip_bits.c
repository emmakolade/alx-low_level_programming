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
	unsigned long int xor;
	unsigned int n_bits = 0;

	xor = n ^ m;

	while (xor)
	{
		n_bits += (xor & 1);
		xor >>= 1;
	}
	return (n_bits);
}
