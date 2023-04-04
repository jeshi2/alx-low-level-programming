#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node at the
 * beginning of a list
 * @head: the pointer to the list
 * @n: the integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_elemnt;

	if (head == NULL)
		return (NULL);

	new_elemnt = malloc(sizeof(listint_t));
	if (new_elemnt == NULL)
		return (NULL);

	new_elemnt->n = n;
	new_elemnt->next = *head;

	*head = new_elemnt;
	return (new_elemnt);
}
