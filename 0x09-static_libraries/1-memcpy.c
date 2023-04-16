#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes to be allocated
 *
 *Return: Integer to be returned after succesful compilation
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int iIndex = n;


	for (; r < iIndex; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

