#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - removes or delet the first nodes of a list.
 * @head: head of the list.
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int retval;

	if (*head == NULL)
		return (0);

	tmp = *head;
	retval = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (retval);
}
