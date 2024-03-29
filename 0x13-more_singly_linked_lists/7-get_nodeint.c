#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first node in the list.
 * @index: index of the node to return.
 *
 * Return: pointer to the nth node of the list, or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	 unsigned int i;
	 listint_t *node;

	 node = head;
	 for (i = 0; i < index && node != NULL; i++)
		 node = node->next;
	  node = node->next;

	  return (i == index ? node : NULL);
}
