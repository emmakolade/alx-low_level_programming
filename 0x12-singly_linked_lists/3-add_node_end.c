#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: the head of the list
 * @str: the string
 *
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *end;
	size_t node;

	new = malloc(sizeof(list_t));
	if(new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (node = 0; str[node] != '\0'; node++)
		;

	
	new->len = node;
	new->next = NULL;
	end  = *head;

	return (end);
}
