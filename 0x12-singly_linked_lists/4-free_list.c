#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Func made to free a linked list
 * @head: The list to be freed
 *
 * AUTHOR: ENYA, EMMANUEL PIUS
 * PROJECT: C PROGRAM TO FREE A LINKED LIST
 */
void free_list(list_t *head)
{
	list_t *counterPointer;

	/* While loop to carry out the freeing */
	while (head)
	{
		counterPointer = head->next;
		free(head->str);
		free(head);
		head = counterPointer;
	}
}
