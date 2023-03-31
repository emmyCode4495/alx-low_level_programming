#include "main.h"

/**
 *_strcat - copies all inputted number
 *@dest: the buffer storing the string value
 *@src: The source String
 *Return: A pointer that points to the resulting string destination
 *
 *
 */

char *_strcat(char *dest, char *src)
{
	int iIndex = 0;
	int jIndex = 0;

	iIndex = 0;
	jIndex = 0;

	while (dest[iIndex] != '\0')
	{
		iIndex++;
	}

	while (src[jIndex] != '\0')
	{
		dest[iIndex] = src[jIndex];
		iIndex++;
		jIndex++;
	}

	dest[iIndex] = '\0';
	return (dest);
}
