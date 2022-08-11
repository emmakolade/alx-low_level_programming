#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function thst adds a new node to the begining of a list
 * @head: the head of the linked list
 * @str: the string to store in the list
 *
 * Return: the address of the new element
 * or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (node = 0; str[node] != '\0'; node++)
		;

	new->len = node;
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return (new);
}
