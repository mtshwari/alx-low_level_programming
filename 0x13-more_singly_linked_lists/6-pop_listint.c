#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: the start node of the list
 * Return: head node data
 */
int pop_listint(listint_t **head)
{	
	if (head == NULL || *head == NULL)
	{
		return 0;
	}
	
	listint_t *temp = *head;

	int n = temp->n;
	*head = (*head)->next;
	free (temp);
	return (n);
}
