#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: singly linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t b;

	for (b = 0; h; b++)
		h = h->next;
	return (b);
}
