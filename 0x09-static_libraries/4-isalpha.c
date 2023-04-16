#include "main.h"

/**
 * _isalpha - function that prints the alphabets
 * @c: the input of the string to be checked
 * Return: the integer to be returned , 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

