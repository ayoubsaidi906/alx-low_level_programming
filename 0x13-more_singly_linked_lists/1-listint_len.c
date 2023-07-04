#include "lists.h"
/**
 * listint_len - Print All the elements of a list
 * @h: Singly linked list
 * Return: Integer
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
