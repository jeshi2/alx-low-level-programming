#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list using Linear Skip search.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current = list;
    skiplist_t *express = NULL;

    if (!list)
        return (NULL);

    express = list->express;

    while (express)
    {
        printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
        if (express->n >= value)
            break;

        current = express;
        express = express->express;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", current->index, express->index);

    while (current && current->n <= value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n == value)
            return (current);
        current = current->next;
    }

    return (NULL);
}
