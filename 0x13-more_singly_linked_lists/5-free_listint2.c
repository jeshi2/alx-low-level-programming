#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - write a function that frees a list
 * @head: the pointer to the list
 */

void free_listint2(listint_t **head) {

	listint_t *peace;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		peace = (*head)->next;
		free(*head);
		*head = peace;
	}
	*head = NULL;
}
