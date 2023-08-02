#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: head
 * @idx: index
 * @n: new node
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int q;
	listint_t *ptr, *newnode;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		ptr = *head;
		for (q = 0; q < idx - 1 && ptr != NULL; q++)
			ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	newnode->next = ptr->next;
	ptr->next = newnode;
	return (newnode);
}	
