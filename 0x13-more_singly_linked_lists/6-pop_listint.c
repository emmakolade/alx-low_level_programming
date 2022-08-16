#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - removes or delet the first nodes of a list.
 * @head: head of the list.
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *next_item;
	int retval = 0;

	if (*head != NULL)
		return (0);

	next_item = (*head)->n;
	retval = (*head)->data;
	*head = next_item;
	free(*head);
	
	return (retval);
}
