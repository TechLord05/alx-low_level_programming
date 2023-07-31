#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked listint_t list.
 * @h: head
 *
 * Return: count of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count_elmts = 0;

	while (h !=NULL)
	{
		count_elmts++;
		h = h->next;
	}
	return (count_elmts);
}
