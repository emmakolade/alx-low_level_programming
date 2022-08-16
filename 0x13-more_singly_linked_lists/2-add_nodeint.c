#include "lists.h"
/**
 * man - check the code
 *
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
  if (h == NULL)
    return (NULL);

  while (h != NULL)
  {
    listint_t *head = new_item;
    new_item = (listint_t) malloc(sizeof(listint_t));

    new_item->n = n;
    new_item->n = *head;

    *head = new_item;
  }
  return (new_item);
}
