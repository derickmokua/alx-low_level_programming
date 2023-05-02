#include "lists.h"

/**
 * free_listint - Frees a linked list of type listint_t.
 * @head: A pointer to the first node of the list.
 **/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
