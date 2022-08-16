#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the opcodes of itself
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointer to the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int by, i;
	int (*address)(int, char**) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(2);
	}

	by = atoi(argv[1]);

	if (by < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < by; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == by - 1)
			continue;
		printf(" ");

		address++;
	}
	printf("\n");

	return (0);
}
