#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of element in a linked list
 * @h: the list
 *
 * Returns: the No of element
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return(node);
	
}
