#include "lists.h"

/**
 * free_listint2 - frees the memory allocated to a linked list
 * @head: pointer to a pointer to a node on the linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;
	while (current != NULL)
	{
		next = current->next;
		free (current);
		current = next;
	}
	*head = NULL;
}
