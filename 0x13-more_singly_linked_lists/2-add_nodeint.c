#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: the head
 * @n: the data in the struct
 * Return: The address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *New_node = malloc(sizeof(listint_t));

	if (New_node == NULL)
		return (NULL);

	New_node->n = n;
	New_node->next = NULL;

	New_node->next = *head;
	*head = New_node;

	return (*head);
}
