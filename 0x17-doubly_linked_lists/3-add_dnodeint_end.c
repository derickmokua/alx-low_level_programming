#include "lists.h"

/**
 * add_dnodeint_end - Adds node at the end of a list.
 * @head: points to pointer of head of list.
 * @n: Data to be added.
 *
 * Return: Address of the new element,NULL in failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	last = *head;

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (last->next)
			last = last->next;
		last->next = new_node;
	}
	new_node->prev = last;

	return (new_node);
}
