#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments supplied to the the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
