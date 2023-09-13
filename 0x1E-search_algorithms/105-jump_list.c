#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list using Jump search.
 * @list: Pointer to the head of the list.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump = sqrt(size);
    size_t step;
    listint_t *current = list;
    listint_t *prev = NULL;

    if (!list)
        return (NULL);

    while (current->next && current->n < value)
    {
        prev = current;
        for (step = 0; step < jump && current->next; step++)
            current = current->next;

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    current = prev;
    while (current && current->n <= value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n == value)
            return (current);
        current = current->next;
    }

    return (NULL);
}
