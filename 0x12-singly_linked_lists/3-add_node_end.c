#include "lists.h"

/**
 * add_node_end - add a new node at the end of the node
 * @head: holds the address of the first node
 * @str: string to duplicate
 * Return: 0 if success
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *c = malloc(sizeof(list_t));

	if (c == NULL)
		return (NULL);

	c->str = strdup(str);
	c->len = strlen(str);
	c->next = NULL;

	if (*head == NULL)
	{
		*head = c;
		return (*head);
	}

	list_t *ptr = malloc(sizeof(list_t));

	ptr = head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = c;
}
