#include <stdio.h>
#include <stlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - programm that adds postive numbers
 * @argc: argument cpunter
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
{
	for (i = 1; i < argc; i++)
{
	int b;
	char *str;

	str = argv[i];
	for (b = 0; str[b] != '\0'; b++)
{
	if (str[b] < 0 || str[b] > 9)
{
	printf("Error\n");
	return (1);
}
}
}
}
	for (i = 1; i < argc; i++)
{
	sum += atoi(argv[i]);
}
	printf("%d\n", sum);
	return (0);
}
