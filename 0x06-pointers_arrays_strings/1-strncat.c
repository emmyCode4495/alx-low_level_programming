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
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return(dest);
}
