#include <stdio.h>
#include "lists.h"

/**
* print_listint - Prints all the elements of a listint_t
* @h: a pointer to the head of the list
*
* Return: the number of nodes in the list
*/

size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
