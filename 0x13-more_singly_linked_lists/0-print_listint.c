#include "lists.h"
/**
 * print_listint - print the elements in the list
 * @h: the start of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
unsigned int node_count = 0;
while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	node_count++;
	}
	return (node_count);
}
