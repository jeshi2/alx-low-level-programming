#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of a linked lists
 * 
 * @head: the pointer to the list
 * @index: is the index of the node, starting at 0
 *
 * Author: Antony Evans
 * Return: nth node and if it does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 1; i <= index; i++)
	{
		if (head->next)
			head = head->next;
		else

		return (NULL);
	}
	return (head);
}
