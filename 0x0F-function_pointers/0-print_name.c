#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - A void function that prints names
 * @name: variable that receives the name
 * @f: pointer to the function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
