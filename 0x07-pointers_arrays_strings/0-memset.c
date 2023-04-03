#include "main.h"
/**
 * _memset - a function that fills a block of memory with a given value
 *@s: The is the starting point of the address
 *@b: The value to be gotten from the user
 *@n: the required number of bytes to be changed
 *Return: The filled string will be returned
 *
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int iIndex = 0;

	/* Using for loop to carry out the filling of the memory */
	for (; n > 0; iIndex++)
	{
		s[iIndex] = b;
		n--;
	}
	return (s);

}
