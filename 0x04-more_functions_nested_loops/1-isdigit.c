#include "main.h"

/**
 *_isdigit - to check if a character is digit
 *@x: The number to be returned after the test
 *Return: The value to be returned after succesful compilation
 *
 *
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
