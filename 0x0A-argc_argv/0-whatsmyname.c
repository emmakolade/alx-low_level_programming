#include <stdio.h>
/**
 * main - a programm that prints its name
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
