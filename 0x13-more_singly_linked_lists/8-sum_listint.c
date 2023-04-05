#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all data(n) of a linked lists
 * @head: pointer to the head of the list
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head)
	{
	i = i + head->n;

	if (head->next)
		head = head->next;
	else
		break;
	}
	return (i);
}
