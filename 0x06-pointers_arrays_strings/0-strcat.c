#include "main.h"

/**
 *_strncpy - copies all inputted number
 *@dest: the buffer storing the string value
 *@src: The source String
 *@n: The maximum number of bytes to be copied from the src
 *Return: A pointer that points to the resulting string destination
 *
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';


	return (dest);
}
