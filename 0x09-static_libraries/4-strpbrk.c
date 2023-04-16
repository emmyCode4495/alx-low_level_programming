#include "main.h"
/**
 * _strpbrk - the function call for the C program
 * @s:input of the string
 * @accept: out string
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;


	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			return (s);
		}
	s++;
	}

	return ('\0');
}

