#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print elements of doubly linked list
 * @h: linked list
 * Return: int (number of nodes)
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;
  /*const dlistint_t *current = h;*/

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
