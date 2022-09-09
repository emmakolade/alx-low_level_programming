#include "main.h"
/**
 * _memcpy - copies @n byte from memory area src to memory area dest
 * @dest: a pointer to the memory area to copy src into
 * @src: the source to copy character from.
 * @n: the number of bytes to copy from src
 *
 * Return: a pointer to dest
 */
 void *_memcpy(void *dest, const void *src, size_t n)
 {
 	unsigned int index;
 	unsigned char *destination = dest;
 	const unsigned char *source = src;

 	for (index = 0; index < n; index++)
 		destination[index] = source[index];
 
 	return (dest);
 }
