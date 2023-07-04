#include "lists.h"
/**
 * sum_listint- Sum of the nth node of a listint
 * @head: Singly linked list
 * Return: Integer
 */
int sum_listint(listint_t *head)
{
	int b = 0;
	listint_t *h;

	if (!head)
		return (0);
	h = head;
	while (h)
	{
		b += h->n;
		h = h->next;
	}
	return (b);
}
