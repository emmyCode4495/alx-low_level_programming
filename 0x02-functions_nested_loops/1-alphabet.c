#include "main.h"
/**
 * print_alphabet - a prototype
 *C progran to print all alphabeta
 *Return: void
 */
void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}
	_putchar('\n');
}
