#include <stdio.h>
/**
 *main - This is the entry point of the Cprogram
 *Return: The return vale after succesful run of the program
 *Description: Program to print decimal digit
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		putchar(numbers + 48);
	}
	putchar('\n');
	return (0);
}
