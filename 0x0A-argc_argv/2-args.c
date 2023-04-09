#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the C program
 * @argc: variable for number of arguments
 *@argv: array of arguments
 *Return: The integer value to be returned
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int iIndex;

	for (iIndex = 0; iIndex < argc; iIndex++)
	{
		printf("%s\n", argv[iIndex]);
	}

	return (0);
}
