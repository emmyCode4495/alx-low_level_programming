#include <stdio.h>
/**
 *main - The entry point of every C program
 *Return: The integer to be returned after compilation
 *Description C program to print out numbers in base10
 */
int main(void)
{

	int numbers = 0;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		printf("%d", numbers);
	}
	printf("\n");
	return (0);
}
