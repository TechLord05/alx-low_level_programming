#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: the head
 *
 * Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data = temp->n;

	if (*head == NULL)
	{
		return (0);
	}


	*head = (*head)->next;
	free(temp);

	return (data);
}
