#include <stdio.h>

/**
 *_strlen - the entry point to the program
 *@str: The varaiable that stores dat
 *Return: Void
 *
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	{
		length++;
	}
	return (length);
}
