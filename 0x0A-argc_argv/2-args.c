#include  <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: the number of argumentrs supplied to the program
 * @argv: an array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
	printf("%s\n", argv[index]);
	}
	return (0);
}
