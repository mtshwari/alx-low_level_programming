#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: the start node of the list
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;

	if (head == NULL || *head == NULL)
	return;
	int n = temp->n;
	*head = (*head)->next;
	free(temp);
	temp = NULL;
	return (n);
}
