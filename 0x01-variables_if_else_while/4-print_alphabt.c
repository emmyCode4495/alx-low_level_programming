#include <stdio.h>
/***
 *
  *main - The entry point of the C program
  *Return: The integer to be returned after compilation
  *Description C program to print lower case alph without q and e
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


