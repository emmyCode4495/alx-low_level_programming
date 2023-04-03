#include "main.h"
/**
 * _memcpy - A function that copies memory
 *@dest: The location where the memory is stored
 *@src: The locaion where it is copied from
 *@n: the variable that receives the number of bytes
 *Return: The copied memory is been returned
 *
 *
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int toStoreMemory = 0;
	int toCopyMemory = n;

	for (; toStoreMemory < toCopyMemory; toStoreMemory++)
	{
		dest[toStoreMemory] = src[toStoreMemory];
		n--;
	}
	return (dest);
}
