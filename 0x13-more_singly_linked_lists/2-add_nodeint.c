#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @n: int to add to list
 *
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *one;

	one = malloc(sizeof(listint_t));
	if (!one)
		return (NULL);
	one->n = n;
	one->next = *head;
	*head = one;
	return (*head);
}
