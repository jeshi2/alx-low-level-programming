#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list using Linear Skip search.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if not found.
 */
{
    skiplist_t *current, *skip;

    if (list == NULL)
        return (NULL);

    for (current = skip = list; skip->next != NULL && skip->n < value;)
    {
        current = skip;
        if (skip->express != NULL)
        {
            skip = skip->express;
            printf("Value checked at index [%ld] = [%d]\n",
                   skip->index, skip->n);
        }
        else
        {
            while (skip->next != NULL)
                skip = skip->next;
        }
    }

    printf("Value found between indexes [%ld] and [%ld]\n",
           current->index, skip->index);

    for (; current->index < skip->index && current->n < value; current = current->next)
        printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
    printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);

    return (current->n == value ? current : NULL);
}
