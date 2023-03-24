#include "main.h"

/**
 *print_line -Function to draw a straight line
 *@n : the variable to initiate the iteration for th eline
 *Return: void
 *
 *
 *
 *
 */

void print_line(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 0; line < n; line++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
