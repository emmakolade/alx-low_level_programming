#include <stdio.h>
/**
 * here - Prints a string befire the main functon is executed
 */
void __attribute__ ((constructor)) here(void)

/**implementation */
void here (void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
