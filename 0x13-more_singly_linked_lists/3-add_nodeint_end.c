#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * 
 * @n: int to add to
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first;
	listint_t *last;

	if (head == NULL)
		return (NULL);

	first = *head;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);

	first->n = n;
	first->next = NULL;

	if (*head == NULL)
	{
		*head = first;
		return (first);
	}
	while (last->next)
		last = last->next;
	last->next = first;

	return (first);
}
