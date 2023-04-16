#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: Variable that receives input
 * @src: Variale that receives input
 * @n: Variable that receives input
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int jIndex;


	jIndex = 0;
	while (jIndex < n && src[jIndex] != '\0')
	{
		dest[jIndex] = src[jIndex];
		jIndex++;
	}
	while (jIndex < n)
	{
		dest[jIndex] = '\0';
		jIndex++;
	}


	return (dest);
}

