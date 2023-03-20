#include <stdio.h>
/**
 *main - themain entry point
 *Return: the integer to be returned after successful compilATION
 *dESCRIPTION: c PROGRAM TO PRINT BASE 16 NUMBERS
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
	return (0);
}
