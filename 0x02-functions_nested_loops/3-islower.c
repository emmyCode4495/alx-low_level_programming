#include "main.h"

/**
 *_islower - Fornlower case print out
 *@c: The integer variable
 *Return: It returns integer
 *
 *
 */

int _islower(int c)
{
	if (c <= 97 && c >= 122)
	{
		return (1);
	}
	return (0);
}
