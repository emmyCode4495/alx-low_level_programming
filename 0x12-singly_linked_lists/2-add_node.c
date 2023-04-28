#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function to add a new node to the beginning of a linked list
 * @head: pointer that points to a pointer
 * @str: pointer to the new string to be added to the node
 *
 * Return: The function returns the address of the new nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int lengthToBePrinted = 0;

	/* The code uses while loop to carry out its operatio */
	while (str[lengthToBePrinted])
		lengthToBePrinted++;

	newNode = malloc(sizeof(list_t));/* Adding the node to list */
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len	= lengthToBePrinted;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
