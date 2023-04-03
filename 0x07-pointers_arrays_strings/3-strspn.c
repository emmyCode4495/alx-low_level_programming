#include "main.h"
/**
 * _strspn - the function that gets the length of a prefix substring
 *@s: memory location that gets the string to be searched
 *@accept: The memory locaation that gets the prefix to be measured
 *Return: The return value for the prototype
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int iIndex;

	while (*s)
	{
		for (iIndex = 0; accept[iIndex]; iIndex++)
		{
			if (*s == accept[iIndex])
			{
				bytes++;
				break;
			}
			else if (accept[iIndex + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
