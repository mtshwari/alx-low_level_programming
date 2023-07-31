#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to a node on the linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	if (head == NULL)
	return;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
