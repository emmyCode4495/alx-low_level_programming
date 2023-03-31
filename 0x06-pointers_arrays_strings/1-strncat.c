#include "main.h"

/**
 *_strncat - function that concatenates the string
 *with specified type from the folder src
 *@dest: The string to be appended upon
 *@src: The string that gets appended to dest
 *@n: the specified number of bytes to be appended to dest
 *Return: Apointer to the retuning string dest
 *
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int iIndex = 0;
	int jIndex = 0;

	while (dest[iIndex] != '\0')
	{
		iIndex++;
	}

	while (jIndex < n && src[jIndex] != '\0')
	{
		dest[iIndex] = src[jIndex];
		iIndex++;
		jIndex++;
	}
	dest[iIndex] = '\0';
	return (dest);
}
