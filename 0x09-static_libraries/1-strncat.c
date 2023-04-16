#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int iIndex;
	int jIndex;


	iIndex = 0;
	while (dest[iIndex] != '\0')
	{
		iIndex++;
	}
	jIndex = 0;
	while (jIndex < n && src[jIndex] != '\0')
	{
	dest[iIndex] = src[jIndex];
	iIndex++;
	jIndex++;
	}
	dest[iIndex] = '\0';
	return (dest);
}

