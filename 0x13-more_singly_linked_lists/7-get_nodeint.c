#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @index: index of the node starting at 0
 * @head: pointer to the head of the list
 * Return: NULL if the node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
