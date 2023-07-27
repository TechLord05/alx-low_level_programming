#include "lists.h"

/**
 * size_t print_list - print all element
 * @h: head
 *
 * Return: count_node
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	const list_t *ptr = malloc(sizeof(list_t));
	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		ptr = ptr->next;
		node_count++;
	}

	return (node_count);
}
