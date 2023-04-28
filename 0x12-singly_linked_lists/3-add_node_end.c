#include <stdlib.h>
#include <string.h>

#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a linked list
 * @head: pointer that points to a pointer
 * @str: variablethat contains the string to put in the new node
 *
 * Return: function returns the address of the node
 * and failed if NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *counter = *head;
	unsigned int lengthOfTheNode = 0;

	/*   While loop that carries the operation */
	while (str[lengthOfTheNode])
		lengthOfTheNode++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = lengthOfTheNode;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (counter->next)
		counter = counter->next;

	counter->next = newNode;

	return (newNode);
}
