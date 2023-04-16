#include "main.h"
/**
 * _strstr - The function prototype of the c program
 * @haystack: The input string
 * @needle:The output string
 * Return: The integer to be returned
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;


		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}


		if (*p == '\0')
			return (haystack);
	}


	return (0);
}

