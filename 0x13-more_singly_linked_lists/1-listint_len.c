#include "lists.h"

/**
 * listint_len - function that returns the number
 * @h: pointer to the head of the list.
 *
 * Return: the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		n_nodes++;
	}

	return (n_nodes)++
}