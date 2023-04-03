#include "main.h"
/**
 * _strpbrk - The function prototype
 *@s: The string to be searched for to get the availabale bytes
 *@accept: the string to be checked
 *Return: The return value
 *
 *
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int iIndex;

	while (*s)
	{
		for (iIndex = 0; accept[iIndex]; iIndex++)
		{
			if (*s == accept[iIndex])
				return (s);
		}
		s++;
	}
	return ('\0');
}
