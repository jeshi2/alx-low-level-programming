#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *reverse_listint(listint_t **head)

{
	listint_t *prev, *cur;

	prev = NULL;
	cur = NULL;

	while (*head != NULL)
	{
		cur = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = cur;
	}

	*head = prev;
	return (*head);


}
