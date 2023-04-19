#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function prototype for iteration
 * @array: array with location memory
 * @size: The number of elements to be printed
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
