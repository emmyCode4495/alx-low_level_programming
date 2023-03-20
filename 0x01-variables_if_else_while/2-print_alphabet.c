#include <stdio.h>
/**
 *main - This is the entry point of the program
 *Return: the integer to be returned after successful compilation
 *Description: To print alphabet in lowercase
 *
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
