#include "main.h"
/**
 * _strchr - Function to locate a character in a string
 *@s: The String to be gotten from the user
 *@c: The desired character to be located
 *Return: The string to be returned
 *
 *
 *
 */
char *_strchr(char *s, char c)
{
	int iIndexValue;

	for (iIndexValue = 0; s[iIndexValue] >= '\0'; iIndexValue++)
	{
		if (s[iIndexValue] == c)
		{
			return (s + iIndexValue);
		}
	}
	return ('\0');
}
