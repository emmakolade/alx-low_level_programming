#include <stdio.h>
#include <unistd.h>

/**
 * start - Prints a string befire the main functon is executed
 */
void start(void) __attribute__ ((constructor));

/**implementation */
void start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
