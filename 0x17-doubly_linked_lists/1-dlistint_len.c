#include"lists.h"
/**
 * print_dlistint - prints doubly linked list int
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int c = 0;

	if (h == NULL)
		return (c);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
		{
		c++;
		h = h->next;
	}

	return (c);
}
