#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: the header pointer
 *
 * Return: the count of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		count_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count_nodes);
}
