#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the list
 * @index: place to insert node
 * @n: value of the inserted node
 * Return: address of the new new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *old, *new;

	old = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (index == 0)
	{
		new->next = old;
		*head = new;
		return (*head);
	}
	while (index > 1)
	{
		old = old->next;
		index--;
		if (!old)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = old->next;
	old->next = new;
	return (new);
}
