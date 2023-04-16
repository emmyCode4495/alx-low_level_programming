#include "main.h"
/**
 * _strchr - Function that prints the char
 * @s: variable that receives input
 * @c: variablethat receives input
 * Return: The return integer after compilation
 */
char *_strchr(char *s, char c)
{
	int iIndex = 0;


	for (; s[iIndex] >= '\0'; iIndex++)
	{
		if (s[iIndex] == c)
			return (&s[iIndex]);
	}
	return (0);
}

