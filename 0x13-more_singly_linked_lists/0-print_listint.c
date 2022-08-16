#include <stdio.h>
#include "lists.h"

/**
* print_listint - Prints all the elements of a listint_T
* @h: a pointer to the head of the list
*
* Return: the number of nodes in the list
*/

size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;
	listint_t *h = head;

	while (*h != NULL)
	{
		printf("%d\n", h->next);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
