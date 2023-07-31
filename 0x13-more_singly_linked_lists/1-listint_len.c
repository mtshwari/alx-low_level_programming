#include "lists.h"

/**
 * listint_len - count the elements in the list
 * @h: start point of the list
 * Return: number of the elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
