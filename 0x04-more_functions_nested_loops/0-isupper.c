#include "main.h"

/**
 *_isupper - C program to return a value for upper cae letters
 *@x: tha value to be returned
 *Return: the integer to be returned on successful execution
 *
 *
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
