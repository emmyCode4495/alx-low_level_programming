#include <stdio.h>

/**
 *swap_int - Swaps the values of 2 int using pointers
 *@a: First integer
 *@b: Secong integer
 *Return: void(No int returning value)
 *
 */

void swap_int(int *a, int *b)
	/* the prototype function that swaps the values*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
