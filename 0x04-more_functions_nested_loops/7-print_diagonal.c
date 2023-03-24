#include "main.h"

/**
 *print_diagonal - print a diagonal line
 *@n: the variable that carries the number of times it will be printed
 *Return: void
 *
 *
 */

void print_diagonal(int n)
{
	int diagonal1, diagonal2;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (diagonal1 = 0; diagonal1 < n; diagonal1++)
		{
			for (diagonal2 = 0; diagonal2 < diagonal1; diagonal2++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
