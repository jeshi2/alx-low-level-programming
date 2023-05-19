#include <stdlib.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *temp;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return -1;

    current = *head;
    if (index == 0)
    {
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    for (i = 0; i < index; i++)
    {
        current = current->next;
        if (current == NULL)
            return -1;
    }

    temp = current;
    current->prev->next = current->next;
    if (current->next != NULL)
        current->next->prev = current->prev;
    free(temp);

    return 1;
}
