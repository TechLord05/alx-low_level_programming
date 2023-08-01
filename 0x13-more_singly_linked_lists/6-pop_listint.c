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
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;

	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
