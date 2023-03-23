#include "main.h"

/**
 *print_numbers - a void function that prints numbers
 *Return: the return type is void
 *
 *
 */

void print_numbers(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		_putchar(numbers + '0');
	}
	_putchar('\n');
}
