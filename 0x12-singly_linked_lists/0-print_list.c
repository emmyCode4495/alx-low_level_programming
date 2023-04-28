#include <stdio.h>
#include "lists.h"

/**
 * print_list - The function prints all elem in the linked list
 * @h: A pointer that gets the location of the list_t list to be printed
 *
 * Return: The function returns the number of nodes
 *
 * PROJECT OWNER: ENYA, EMMNAUEL PIUS
 * PROJECT: prints all elemnets of a linked list
 * and also the number of nodes
 * date: 28th april 2023
 */
size_t print_list(const list_t *h)
{
	size_t numOfNodesToReturn = 0;

	do {

		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		numOfNodesToReturn++;
	} while (h);

	return (numOfNodesToReturn);
}
