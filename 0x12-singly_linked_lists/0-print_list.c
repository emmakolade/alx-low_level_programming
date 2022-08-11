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

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil\n");
			h = h->next;
			node++;
			continue

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		node++;
	}
	return (node);
}
