#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data (n) of a linked list
 * @head: points to the pointer of head of linked list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
