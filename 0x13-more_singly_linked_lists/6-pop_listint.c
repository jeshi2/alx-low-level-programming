#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: the pointer to the list
 * Author: Antony Evans
 * Return: the head node's data (n) or return 0if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *del;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;

	del = *head;
	*head = (*head)->next;
	free(del);

	return (n);
}
