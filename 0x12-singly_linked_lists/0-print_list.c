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
	size_t node = 0;

	for (; h->next != '\0'; node++)
	{
		if (h->str == NULL)
			printf("[0] (nil\n");
		else
			printf("[%d] %s\n", h->len, h->str);
	}
	return (node);
}
