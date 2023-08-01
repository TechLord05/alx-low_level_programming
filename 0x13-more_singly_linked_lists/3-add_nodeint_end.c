#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to the head of the list
 * @n: The data to be stored in the new node
 *
 * Return: Address of the new node or NULL if memory allocation fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *current;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = temp;
	}

	return (temp);
}
