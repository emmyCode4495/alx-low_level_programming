#include <stdio.h>
#include "main.h"

/**
 * main - the entry point of a C program
 *@argc: function to get number of arguments
 *@argv: function for the array of arguments
 *Return: the return value of the program
 *
 *
 *
 */
int main(int argc, char *argv[])
{
(void) argv; /* statement to ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
