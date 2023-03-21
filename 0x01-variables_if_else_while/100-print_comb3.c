#include <stdio.h>
/**
 *main - main function for a C program
 *Return: Returns the integer after compile time successful compilation
 *Description: Prints 2 combinations of number
 *
 */
int main(void)
{
	int firstDigits;
	int secondDigits;

	for (firstDigits = 0; firstDigits < 10; firstDigits++)
	{
		for (secondDigits = 0; secondDigits < 10; secondDigits++)
		{
			if (firstDigits < secondDigits && firstDigits != secondDigits)
			{
				putchar(firstDigits + '0');
				putchar(secondDigits + '0');
				if (firstDigits + secondDigits != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
