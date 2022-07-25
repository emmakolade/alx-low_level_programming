#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments supplied to the the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("argv = %d\n", argv);
	return (0);
}
