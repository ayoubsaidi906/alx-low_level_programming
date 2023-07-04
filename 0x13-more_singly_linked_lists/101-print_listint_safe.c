#include "lists.h"
/**
 * print_listint_safe - Print All the elements of a list
 * @head: Singly linked list
 * Return: Integer
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t s = 0;

	if (head)
		exit(98);
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		s++;
		head = head->next;
	}
	return (s);
}
