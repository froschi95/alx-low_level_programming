#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of linked list
 * Return: nada
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
