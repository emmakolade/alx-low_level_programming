#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - frees list
 * @head: heat of the link
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		head = head->next;
		free(list->str);
		free(list);


	}

}
