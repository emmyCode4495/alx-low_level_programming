#include <stdio.h>
/**
 *main - The entry point of a C program
 *Return: the integer returnded after succesful run
 *Description: alphabets in reverse order
 *
 */
int main(void)
{
	int numbers = 122;

	while (numbers >= 97)
	{
		putchar(numbers);
		numbers--;
	}
	putchar('\n');
	return (0);

}
