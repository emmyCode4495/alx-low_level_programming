#include "main.h"
#include <stdio.h>

/**
 *print_rev - entry point to print a string in reverse
 *@s: The variable to accept and print the value
 *Return: void
 *
 *
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
