#include <stdio.h>
/**
 *main - This is the entry point of the C program
 *Description: Print alphabet in lowercase withou q and e
 *Return: The integer to be returned after successful compilation
 */
int main(void)
{
	int lowerCaseAlphabetStartValue = 97;

	while (lowerCaseAlphabetStartValue <= 122)
	{
		if (lowerCaseAlphabetStartValue == 101 || lowerCaseAlphabetStartValue == 113)
		{
			lowerCaseAlphabetStartValue++;
			continue;
		}
		putchar(lowerCaseAlphabetStartValue);
		lowerCaseAlphabetStartValue++;
	}
	putchar('\n');
	return (0);
}


