#include "main.h"
/**
 * _strlen - function to eturn the length of a string
 * @s: the string to be returned
 * Return: the length will be returned
 */
int _strlen(char *s)
{
	int longi = 0;


	while (*s != '\0')
	{
		longi++;
		s++;
	}


	return (longi);
}

