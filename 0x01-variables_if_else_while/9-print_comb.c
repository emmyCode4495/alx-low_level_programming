#include <stdio.h>
/**
 *main - themain entry point
 *Return: the integer to be returned after successful compilATION
 *dESCRIPTION: c PROGRAM TO PRINt NUMBERS with separation character
 *
 */
int main(void)
{
	int numbers;

	for (numbers = 48; numbers <= 57; numbers++)
	{
		putchar(numbers);
		if(numbers == 57)
		{
			continue;
		}	
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
