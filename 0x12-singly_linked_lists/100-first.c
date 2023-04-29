
#include <stdio.h>


/**
 * first - A void function that prints a text before the main function
 *
 * AUTHOR: ENYA, EMMANUEL PIUS
 * PROJECT: PROGRAM TO PRINT A FUNCTION BEFOFRE
 * THE MAIN FUNCTION
 */

/* The constructor key word prints before the main function */
void first() __attribute__((constructor));

void first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
