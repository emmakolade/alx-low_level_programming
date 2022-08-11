#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *  print_list - prints all the element of list_t list
 *  @h: the string.
 *
 *  Return: no of nodes
 */

size_t print_list(const list_t *h)
{
	int node = 0;

	if (h->str == NULL)
		printf("[0] (nil)");

	for (; h-> != '\0'; node++)
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	return (node);
}
