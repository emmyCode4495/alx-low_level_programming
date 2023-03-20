#include <stdio.h>
/**
 *main - The entry point of the C program
 *Return: the integer to be returned after succesful runtime
 *Description: C program to print out alphabets in both upper and lower
 *
 */
int main(void)
{
	int lowerCaseStartValue = 97;
	int upperCaseStartValue = 65;

	while (lowerCaseStartValue <= 122)
	{
		putchar(lowerCaseStartValue);
		lowerCaseStartValue++;
	}
	while (upperCaseStartValue <= 90)
	{
		putchar(upperCaseStartValue);
		upperCaseStartValue++;
	}
	putchar('\n');
	return (0);
}
