#include "lists.h"

/**
 * free_list - frees up all the memory allocated for a list
 * @head: points to a node on the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
{
	list_t *temp = head;

	head = head->next;
	free(temp->str);
	free(temp);
}
}
