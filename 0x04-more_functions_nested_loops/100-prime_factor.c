#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 *main - The entry point of the C program
 *Return: the return type after succesful compilation
 *Desc: Program to print the largest prime factor of a given number
 *
 *
 */

int main(void)
{
	long x, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			maxf = number / x;
		}
	}
	printf("%d\n", maxf);
	return (0);
}
