#include <stdio.h>

/**
 *main - themain entry of the C program
 *Return: The returning integer when compile successfull
 *DEscription: to print base10 and base16 values
 *
 */
int main(void)
{
	int numbers;
	int alphabets;

	for (numbers = 48; numbers <= 57; numbers++)
	{
		putchar(numbers);
	}
	for (alphabets = 97; alphabets <= 102; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
