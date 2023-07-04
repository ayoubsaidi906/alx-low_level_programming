#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t count = 0;

    if (head == NULL)
        exit(98);

    slow = head;
    fast = head;

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;

        if (slow == fast)
        {
            printf("-> [%p] %d\n", (void *)slow, slow->n);
            exit(98);
        }
    }

    return count;
}

