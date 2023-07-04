#include "lists.h"
/**
 * print_listint - Print All the elements of a list
 * @h: Singly linked list
 * Return: Integer
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return (a);
}
