#include "main.h"

/**
 *_puts - Function to print the string
 *@str: The variable to print
 *Return: void
 *
 *
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
