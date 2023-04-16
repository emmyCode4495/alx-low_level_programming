#include "main.h"
 /**
 *_strcat - Function to concatenate two string
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int iIndex;
	int jIndex;


	iIndex = 0;
	while (dest[iIndex] != '\0')
	{
		iIndex++;
	}
	jIndex = 0;
	while (src[jIndex] != '\0')
	{
		dest[iIndex] = src[jIndex];
		iIndex++;
		jIndex++;
	}

	dest[iIndex] = '\0';
	return (dest);
}
