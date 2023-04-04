#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 *@h: single linked list
 * Return: numer of nodes
 */
size_t listint_len(const listint_t *h){
	size_t x = 0;
	while (h){
		h = h->next;
		x++;
	}
	return (x);
}
