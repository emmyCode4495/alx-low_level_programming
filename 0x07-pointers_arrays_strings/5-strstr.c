#include "main.h"
/**
 * _strstr - th prototype function that locates a substring
 *@haystack: The master string where the substring is gotten from
 *@needle: The substring to be gotten
 *Return: the return value of the function
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int iIndex;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		iIndex = 0;

		if (haystack[iIndex] == needle[iIndex])
		{
			do {
				if (needle[iIndex + 1] == '\0')
					return (haystack);

				iIndex++;
			} while (haystack[iIndex] == needle[iIndex]);
		}

		haystack++;
	}

	return ('\0');
}
