#include "main.h"

/**
 *print_square - Prints the # symbol in a square like format
 *@size: the variable to take the number of # to be printed
 *Return: void
 *
 *
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
