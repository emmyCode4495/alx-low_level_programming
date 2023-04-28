#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s -The singly linked list that will be used throughout
 * @str: This is a Malloc type of string
 * @len: an unsigned int variable that prints length of the string
 * @next: The variable that points to the next node in the list
 *
 * NAME: ENYA, EMMANUEL PIUS
 * PROJECT: ALX C LINKED-LIST PROJECT
 * STACK: THIS IS A C PROGRAM THAT CONTAINS THE HEADER FILES
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* ######## THE PROTOTYPES FOR THE PROJECT ###### */

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

/* ######## THE PROTOTYPES FOR THE PROJECT ###### */
#endif
