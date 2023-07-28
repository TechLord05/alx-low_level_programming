#include "lists.h"

/**
 * add_node - add a new node at the beginning
 * head: the pointer to the first node
 * @str: string to duplicate
 * Return: The new address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *c = malloc(sizeof(list_t));

	if (c == NULL)
		return (NULL);

	c->str = strdup(str);
	c->len = strlen(str);
	c->next = NULL;

	c->next = *head;
	*head = c;

	return (c);
}
