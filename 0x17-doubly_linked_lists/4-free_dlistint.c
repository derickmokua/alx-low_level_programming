#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 *
 * @head: pointer to head of list.
 *
 * Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);

		head = next;
	}
}

