#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes the node at index of linked lists
 * @head: head of the list
 * @index: emplacement of the node to delete
 * Author: Antony Evans
 * Return: pointr to head of list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *old, *del;

	if (!head || !*head)
		return (-1);
	old = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(old);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		old = old->next;
		if (old == NULL)
			return (-1);
	}
	del = old->next;
	old->next = del->next;
	free(del);
	return (1);
}
