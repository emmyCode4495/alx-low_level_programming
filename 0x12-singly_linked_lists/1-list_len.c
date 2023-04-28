#include <stdlib.h>
#include "lists.h"

/**
 * list_len - func that returns numb of elements in the linked list
 * @h: THE POINTER TO LIS ELEMENTS
 *
 * Return: The func returns the number elem in the linked list
 *
 * author: ENYA, EMMANUEL PIUS
 * PROJECT: A C PRORAM THAT RETURNS THE NUMBER
 * OF ELEMNENTS IN A LINKED LIST
 *
 * THE PROTOTYPE USED IS size_t list_len(const list_t *h)
 */
size_t list_len(const list_t *h)
{
	size_t numOfElementsToPrint = 0;

	while (h)
	{
		numOfElementsToPrint++;
		h = h->next;
	}
	return (numOfElementsToPrint);
}
